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

// Function: sub_001387D0
// Address: 0x1387d0 - 0x138b78
void sub_001387D0_0x1387d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001387D0_0x1387d0");
#endif

    switch (ctx->pc) {
        case 0x13880cu: goto label_13880c;
        case 0x138824u: goto label_138824;
        case 0x138844u: goto label_138844;
        case 0x13885cu: goto label_13885c;
        case 0x13887cu: goto label_13887c;
        case 0x138894u: goto label_138894;
        case 0x1388b4u: goto label_1388b4;
        case 0x1388c8u: goto label_1388c8;
        case 0x1388dcu: goto label_1388dc;
        case 0x138908u: goto label_138908;
        case 0x138930u: goto label_138930;
        case 0x138938u: goto label_138938;
        case 0x138950u: goto label_138950;
        case 0x138988u: goto label_138988;
        case 0x138a44u: goto label_138a44;
        case 0x138a9cu: goto label_138a9c;
        case 0x138b0cu: goto label_138b0c;
        default: break;
    }

    ctx->pc = 0x1387d0u;

    // 0x1387d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1387d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1387d4: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1387d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1387d8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1387d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1387dc: 0x24a5e570  addiu       $a1, $a1, -0x1A90
    ctx->pc = 0x1387dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960496));
    // 0x1387e0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1387e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1387e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1387e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1387e8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1387e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1387ec: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x1387ecu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x1387f0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1387f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1387f4: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x1387f4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x1387f8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1387f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1387fc: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x1387fcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x138800: 0x8e3001a8  lw          $s0, 0x1A8($s1)
    ctx->pc = 0x138800u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
    // 0x138804: 0xc0406e8  jal         func_101BA0
    ctx->pc = 0x138804u;
    SET_GPR_U32(ctx, 31, 0x13880Cu);
    ctx->pc = 0x138808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138804u;
    // 0x138808: 0x3652ffff  ori         $s2, $s2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x101BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101BA0u, 0x138804u, 0x13880Cu)) {
        return;
    }
    ctx->pc = 0x13880Cu;
label_13880c:
    // 0x13880c: 0x56020009  bnel        $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13880Cu;
    {
        const bool branch_taken_0x13880c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x13880c) {
            ctx->pc = 0x138810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13880Cu;
            // 0x138810: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138834u;
            goto label_138834;
        }
    }
    ctx->pc = 0x138814u;
    // 0x138814: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x138814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x138818: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x138818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13881c: 0xc0406e8  jal         func_101BA0
    ctx->pc = 0x13881Cu;
    SET_GPR_U32(ctx, 31, 0x138824u);
    ctx->pc = 0x138820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13881Cu;
    // 0x138820: 0x24a5e598  addiu       $a1, $a1, -0x1A68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101BA0u, 0x13881Cu, 0x138824u)) {
        return;
    }
    ctx->pc = 0x138824u;
label_138824:
    // 0x138824: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x138824u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x138828: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x138828u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13882c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x13882Cu;
    {
        const bool branch_taken_0x13882c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13882Cu;
        // 0x138830: 0x24a5e5c0  addiu       $a1, $a1, -0x1A40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13882c) {
            ctx->pc = 0x1388D4u;
            goto label_1388d4;
        }
    }
    ctx->pc = 0x138834u;
label_138834:
    // 0x138834: 0x8e3001a8  lw          $s0, 0x1A8($s1)
    ctx->pc = 0x138834u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
    // 0x138838: 0x24a5e5e8  addiu       $a1, $a1, -0x1A18
    ctx->pc = 0x138838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960616));
    // 0x13883c: 0xc0406e8  jal         func_101BA0
    ctx->pc = 0x13883Cu;
    SET_GPR_U32(ctx, 31, 0x138844u);
    ctx->pc = 0x138840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13883Cu;
    // 0x138840: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101BA0u, 0x13883Cu, 0x138844u)) {
        return;
    }
    ctx->pc = 0x138844u;
label_138844:
    // 0x138844: 0x56020009  bnel        $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x138844u;
    {
        const bool branch_taken_0x138844 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x138844) {
            ctx->pc = 0x138848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138844u;
            // 0x138848: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13886Cu;
            goto label_13886c;
        }
    }
    ctx->pc = 0x13884Cu;
    // 0x13884c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x13884cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x138850: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x138850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138854: 0xc0406e8  jal         func_101BA0
    ctx->pc = 0x138854u;
    SET_GPR_U32(ctx, 31, 0x13885Cu);
    ctx->pc = 0x138858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138854u;
    // 0x138858: 0x24a5e608  addiu       $a1, $a1, -0x19F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101BA0u, 0x138854u, 0x13885Cu)) {
        return;
    }
    ctx->pc = 0x13885Cu;
label_13885c:
    // 0x13885c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x13885cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x138860: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x138860u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138864: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x138864u;
    {
        const bool branch_taken_0x138864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138864u;
        // 0x138868: 0x24a5e628  addiu       $a1, $a1, -0x19D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138864) {
            ctx->pc = 0x1388D4u;
            goto label_1388d4;
        }
    }
    ctx->pc = 0x13886Cu;
label_13886c:
    // 0x13886c: 0x8e3001a8  lw          $s0, 0x1A8($s1)
    ctx->pc = 0x13886cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
    // 0x138870: 0x24a5e648  addiu       $a1, $a1, -0x19B8
    ctx->pc = 0x138870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960712));
    // 0x138874: 0xc0406e8  jal         func_101BA0
    ctx->pc = 0x138874u;
    SET_GPR_U32(ctx, 31, 0x13887Cu);
    ctx->pc = 0x138878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138874u;
    // 0x138878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101BA0u, 0x138874u, 0x13887Cu)) {
        return;
    }
    ctx->pc = 0x13887Cu;
label_13887c:
    // 0x13887c: 0x56020009  bnel        $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13887Cu;
    {
        const bool branch_taken_0x13887c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x13887c) {
            ctx->pc = 0x138880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13887Cu;
            // 0x138880: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1388A4u;
            goto label_1388a4;
        }
    }
    ctx->pc = 0x138884u;
    // 0x138884: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x138884u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x138888: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x138888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13888c: 0xc0406e8  jal         func_101BA0
    ctx->pc = 0x13888Cu;
    SET_GPR_U32(ctx, 31, 0x138894u);
    ctx->pc = 0x138890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13888Cu;
    // 0x138890: 0x24a5e670  addiu       $a1, $a1, -0x1990 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101BA0u, 0x13888Cu, 0x138894u)) {
        return;
    }
    ctx->pc = 0x138894u;
label_138894:
    // 0x138894: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x138894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x138898: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x138898u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13889c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x13889Cu;
    {
        const bool branch_taken_0x13889c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1388A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13889Cu;
        // 0x1388a0: 0x24a5e690  addiu       $a1, $a1, -0x1970 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13889c) {
            ctx->pc = 0x1388D4u;
            goto label_1388d4;
        }
    }
    ctx->pc = 0x1388A4u;
label_1388a4:
    // 0x1388a4: 0x8e3001a8  lw          $s0, 0x1A8($s1)
    ctx->pc = 0x1388a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
    // 0x1388a8: 0x24a5e6b8  addiu       $a1, $a1, -0x1948
    ctx->pc = 0x1388a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960824));
    // 0x1388ac: 0xc0406e8  jal         func_101BA0
    ctx->pc = 0x1388ACu;
    SET_GPR_U32(ctx, 31, 0x1388B4u);
    ctx->pc = 0x1388B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1388ACu;
    // 0x1388b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101BA0u, 0x1388ACu, 0x1388B4u)) {
        return;
    }
    ctx->pc = 0x1388B4u;
label_1388b4:
    // 0x1388b4: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1388B4u;
    {
        const bool branch_taken_0x1388b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1388B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388B4u;
        // 0x1388b8: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1388b4) {
            ctx->pc = 0x1388E0u;
            goto label_1388e0;
        }
    }
    ctx->pc = 0x1388BCu;
    // 0x1388bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1388bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1388c0: 0xc0406e8  jal         func_101BA0
    ctx->pc = 0x1388C0u;
    SET_GPR_U32(ctx, 31, 0x1388C8u);
    ctx->pc = 0x1388C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1388C0u;
    // 0x1388c4: 0x24a5e6d8  addiu       $a1, $a1, -0x1928 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101BA0u, 0x1388C0u, 0x1388C8u)) {
        return;
    }
    ctx->pc = 0x1388C8u;
label_1388c8:
    // 0x1388c8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1388c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1388cc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1388ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1388d0: 0x24a5e6f8  addiu       $a1, $a1, -0x1908
    ctx->pc = 0x1388d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960888));
label_1388d4:
    // 0x1388d4: 0xc0406e8  jal         func_101BA0
    ctx->pc = 0x1388D4u;
    SET_GPR_U32(ctx, 31, 0x1388DCu);
    ctx->pc = 0x1388D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1388D4u;
    // 0x1388d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101BA0u, 0x1388D4u, 0x1388DCu)) {
        return;
    }
    ctx->pc = 0x1388DCu;
label_1388dc:
    // 0x1388dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1388dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1388e0:
    // 0x1388e0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1388e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1388e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1388e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1388e8: 0x5262009c  beql        $s3, $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x1388E8u;
    {
        const bool branch_taken_0x1388e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1388e8) {
            ctx->pc = 0x1388ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1388E8u;
            // 0x1388ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138B5Cu;
            goto label_138b5c;
        }
    }
    ctx->pc = 0x1388F0u;
    // 0x1388f0: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1388F0u;
    {
        const bool branch_taken_0x1388f0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1388F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388F0u;
        // 0x1388f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1388f0) {
            ctx->pc = 0x138900u;
            goto label_138900;
        }
    }
    ctx->pc = 0x1388F8u;
    // 0x1388f8: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x1388F8u;
    {
        const bool branch_taken_0x1388f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1388FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388F8u;
        // 0x1388fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1388f8) {
            ctx->pc = 0x138B5Cu;
            goto label_138b5c;
        }
    }
    ctx->pc = 0x138900u;
label_138900:
    // 0x138900: 0xc04f0c2  jal         func_13C308
    ctx->pc = 0x138900u;
    SET_GPR_U32(ctx, 31, 0x138908u);
    ctx->pc = 0x138904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138900u;
    // 0x138904: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C308u, 0x138900u, 0x138908u)) {
        return;
    }
    ctx->pc = 0x138908u;
label_138908:
    // 0x138908: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x138908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13890c: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x13890cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
    // 0x138910: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x138910u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x138914: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x138914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x138918: 0x8e241538  lw          $a0, 0x1538($s1)
    ctx->pc = 0x138918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5432)));
    // 0x13891c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13891cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x138920: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x138920u;
    {
        const bool branch_taken_0x138920 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x138924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138920u;
        // 0x138924: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x138920) {
            ctx->pc = 0x138968u;
            goto label_138968;
        }
    }
    ctx->pc = 0x138928u;
    // 0x138928: 0xc062018  jal         func_188060
    ctx->pc = 0x138928u;
    SET_GPR_U32(ctx, 31, 0x138930u);
    ctx->pc = 0x13892Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138928u;
    // 0x13892c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x188060u, 0x138928u, 0x138930u)) {
        return;
    }
    ctx->pc = 0x138930u;
label_138930:
    // 0x138930: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x138930u;
    {
        const bool branch_taken_0x138930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138930u;
        // 0x138934: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x138930) {
            ctx->pc = 0x1389C0u;
            goto label_1389c0;
        }
    }
    ctx->pc = 0x138938u;
label_138938:
    // 0x138938: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x138938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13893c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13893cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138940: 0x0  nop
    ctx->pc = 0x138940u;
    // NOP
    // 0x138944: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x138944u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x138948: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x138948u;
    {
        const bool branch_taken_0x138948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138948u;
        // 0x13894c: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x138948) {
            ctx->pc = 0x138A70u;
            goto label_138a70;
        }
    }
    ctx->pc = 0x138950u;
label_138950:
    // 0x138950: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x138950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x138954: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x138954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138958: 0x0  nop
    ctx->pc = 0x138958u;
    // NOP
    // 0x13895c: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x13895cu;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x138960: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x138960u;
    {
        const bool branch_taken_0x138960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138960u;
        // 0x138964: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x138960) {
            ctx->pc = 0x138AC8u;
            goto label_138ac8;
        }
    }
    ctx->pc = 0x138968u;
label_138968:
    // 0x138968: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x138968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x13896c: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x13896cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x138970: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x138970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x138974: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x138974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x138978: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x138978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13897c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x13897cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x138980: 0xc04f0f0  jal         func_13C3C0
    ctx->pc = 0x138980u;
    SET_GPR_U32(ctx, 31, 0x138988u);
    ctx->pc = 0x138984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138980u;
    // 0x138984: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x138980u, 0x138988u)) {
        return;
    }
    ctx->pc = 0x138988u;
label_138988:
    // 0x138988: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x138988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13898c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x13898cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138990: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x138990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x138994: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x138994u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x138998: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x138998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13899c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x13899cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1389a0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1389a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1389a4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1389a4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1389a8: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x1389a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1389ac: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1389acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1389b0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1389b0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1389b4: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x1389b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1389b8: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1389b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1389bc: 0x0  nop
    ctx->pc = 0x1389bcu;
    // NOP
label_1389c0:
    // 0x1389c0: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x1389c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1389c4: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x1389c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1389c8: 0x0  nop
    ctx->pc = 0x1389c8u;
    // NOP
    // 0x1389cc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1389CCu;
    {
        const bool branch_taken_0x1389cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1389D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1389CCu;
        // 0x1389d0: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1389cc) {
            ctx->pc = 0x1389D8u;
            goto label_1389d8;
        }
    }
    ctx->pc = 0x1389D4u;
    // 0x1389d4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1389d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1389d8:
    // 0x1389d8: 0xae221aac  sw          $v0, 0x1AAC($s1)
    ctx->pc = 0x1389d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6828), GPR_U32(ctx, 2));
    // 0x1389dc: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1389dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1389e0: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x1389e0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x1389e4: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x1389e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1389e8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1389e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1389ec: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1389ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1389f0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1389f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1389f4: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x1389f4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1389f8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1389f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1389fc: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x1389fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x138a00: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x138a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x138a04: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x138a04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x138a08: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x138a08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x138a0c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x138a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x138a10: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x138a10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x138a14: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x138a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x138a18: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x138a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x138a1c: 0x6ba60027  ldl         $a2, 0x27($sp)
    ctx->pc = 0x138a1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x138a20: 0x6fa60020  ldr         $a2, 0x20($sp)
    ctx->pc = 0x138a20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x138a24: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x138a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x138a28: 0xb3a60037  sdl         $a2, 0x37($sp)
    ctx->pc = 0x138a28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x138a2c: 0xb7a60030  sdr         $a2, 0x30($sp)
    ctx->pc = 0x138a2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x138a30: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x138a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x138a34: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x138a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x138a38: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x138a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x138a3c: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x138A3Cu;
    SET_GPR_U32(ctx, 31, 0x138A44u);
    ctx->pc = 0x138A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138A3Cu;
    // 0x138a40: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x138A3Cu, 0x138A44u)) {
        return;
    }
    ctx->pc = 0x138A44u;
label_138a44:
    // 0x138a44: 0x0  nop
    ctx->pc = 0x138a44u;
    // NOP
    // 0x138a48: 0x0  nop
    ctx->pc = 0x138a48u;
    // NOP
    // 0x138a4c: 0x46000044  c1          0x44
    ctx->pc = 0x138a4cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x138a50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x138a50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138a54: 0x0  nop
    ctx->pc = 0x138a54u;
    // NOP
    // 0x138a58: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x138a58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138a5c: 0x0  nop
    ctx->pc = 0x138a5cu;
    // NOP
    // 0x138a60: 0x4501ffb5  bc1t        . + 4 + (-0x4B << 2)
    ctx->pc = 0x138A60u;
    {
        const bool branch_taken_0x138a60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x138A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A60u;
        // 0x138a64: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a60) {
            ctx->pc = 0x138938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138938;
        }
    }
    ctx->pc = 0x138A68u;
    // 0x138a68: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x138a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138a6c: 0x0  nop
    ctx->pc = 0x138a6cu;
    // NOP
label_138a70:
    // 0x138a70: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x138a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138a74: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x138a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x138a78: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x138a78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x138a7c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x138a7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x138a80: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x138a80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x138a84: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x138a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x138a88: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x138a88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x138a8c: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x138a8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x138a90: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x138a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x138a94: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x138A94u;
    SET_GPR_U32(ctx, 31, 0x138A9Cu);
    ctx->pc = 0x138A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138A94u;
    // 0x138a98: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x138A94u, 0x138A9Cu)) {
        return;
    }
    ctx->pc = 0x138A9Cu;
label_138a9c:
    // 0x138a9c: 0x0  nop
    ctx->pc = 0x138a9cu;
    // NOP
    // 0x138aa0: 0x0  nop
    ctx->pc = 0x138aa0u;
    // NOP
    // 0x138aa4: 0x46000044  c1          0x44
    ctx->pc = 0x138aa4u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x138aa8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x138aa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138aac: 0x0  nop
    ctx->pc = 0x138aacu;
    // NOP
    // 0x138ab0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x138ab0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138ab4: 0x0  nop
    ctx->pc = 0x138ab4u;
    // NOP
    // 0x138ab8: 0x4501ffa5  bc1t        . + 4 + (-0x5B << 2)
    ctx->pc = 0x138AB8u;
    {
        const bool branch_taken_0x138ab8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x138ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138AB8u;
        // 0x138abc: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x138ab8) {
            ctx->pc = 0x138950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138950;
        }
    }
    ctx->pc = 0x138AC0u;
    // 0x138ac0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x138ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138ac4: 0x0  nop
    ctx->pc = 0x138ac4u;
    // NOP
label_138ac8:
    // 0x138ac8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x138ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138acc: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x138accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x138ad0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x138ad0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x138ad4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x138ad4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x138ad8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x138ad8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x138adc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x138adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x138ae0: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x138ae0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x138ae4: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x138ae4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x138ae8: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x138ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x138aec: 0xc7a40034  lwc1        $f4, 0x34($sp)
    ctx->pc = 0x138aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x138af0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x138af0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x138af4: 0xc7ac0038  lwc1        $f12, 0x38($sp)
    ctx->pc = 0x138af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x138af8: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x138af8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x138afc: 0x46026302  mul.s       $f12, $f12, $f2
    ctx->pc = 0x138afcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x138b00: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x138b00u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x138b04: 0xc09b320  jal         func_26CC80
    ctx->pc = 0x138B04u;
    SET_GPR_U32(ctx, 31, 0x138B0Cu);
    ctx->pc = 0x138B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138B04u;
    // 0x138b08: 0x460c1b00  add.s       $f12, $f3, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26CC80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26CC80u, 0x138B04u, 0x138B0Cu)) {
        return;
    }
    ctx->pc = 0x138B0Cu;
label_138b0c:
    // 0x138b0c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x138b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x138b10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x138b10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x138b14: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x138b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x138b18: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x138b18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x138b1c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x138b1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x138b20: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x138b20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x138b24: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x138b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x138b28: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x138b28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x138b2c: 0x0  nop
    ctx->pc = 0x138b2cu;
    // NOP
    // 0x138b30: 0x0  nop
    ctx->pc = 0x138b30u;
    // NOP
    // 0x138b34: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x138b34u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[2]);
    // 0x138b38: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x138b38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138b3c: 0x0  nop
    ctx->pc = 0x138b3cu;
    // NOP
    // 0x138b40: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x138B40u;
    {
        const bool branch_taken_0x138b40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x138b40) {
            ctx->pc = 0x138B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138B40u;
            // 0x138b44: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x138B48u;
            goto label_138b48;
        }
    }
    ctx->pc = 0x138B48u;
label_138b48:
    // 0x138b48: 0x0  nop
    ctx->pc = 0x138b48u;
    // NOP
    // 0x138b4c: 0x0  nop
    ctx->pc = 0x138b4cu;
    // NOP
    // 0x138b50: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x138b50u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[3]);
    // 0x138b54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x138b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138b58: 0xe6201aa8  swc1        $f0, 0x1AA8($s1)
    ctx->pc = 0x138b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6824), bits); }
label_138b5c:
    // 0x138b5c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x138b5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x138b60: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x138b60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x138b64: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x138b64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x138b68: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x138b68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x138b6c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x138b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x138b70: 0x3e00008  jr          $ra
    ctx->pc = 0x138B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B70u;
        // 0x138b74: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138B78u;
}
