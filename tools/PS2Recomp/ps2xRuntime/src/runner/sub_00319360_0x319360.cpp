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

// Function: sub_00319360
// Address: 0x319360 - 0x31a268
void sub_00319360_0x319360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319360_0x319360");
#endif

    switch (ctx->pc) {
        case 0x3193b0u: goto label_3193b0;
        case 0x3193b8u: goto label_3193b8;
        case 0x3193d8u: goto label_3193d8;
        case 0x319428u: goto label_319428;
        case 0x319450u: goto label_319450;
        case 0x31948cu: goto label_31948c;
        case 0x3194d4u: goto label_3194d4;
        case 0x3194d8u: goto label_3194d8;
        case 0x3194dcu: goto label_3194dc;
        case 0x319598u: goto label_319598;
        case 0x3195e0u: goto label_3195e0;
        case 0x3197a4u: goto label_3197a4;
        case 0x3197c8u: goto label_3197c8;
        case 0x3198f0u: goto label_3198f0;
        case 0x319940u: goto label_319940;
        case 0x319948u: goto label_319948;
        case 0x319964u: goto label_319964;
        case 0x319998u: goto label_319998;
        case 0x3199dcu: goto label_3199dc;
        case 0x319a0cu: goto label_319a0c;
        case 0x319ab0u: goto label_319ab0;
        case 0x319b18u: goto label_319b18;
        case 0x319b54u: goto label_319b54;
        case 0x319b90u: goto label_319b90;
        case 0x319bb8u: goto label_319bb8;
        case 0x319bf4u: goto label_319bf4;
        case 0x319c68u: goto label_319c68;
        case 0x319cdcu: goto label_319cdc;
        case 0x319d1cu: goto label_319d1c;
        case 0x319d50u: goto label_319d50;
        case 0x319db8u: goto label_319db8;
        case 0x319decu: goto label_319dec;
        case 0x319e28u: goto label_319e28;
        case 0x319e50u: goto label_319e50;
        case 0x319e8cu: goto label_319e8c;
        case 0x319eb0u: goto label_319eb0;
        case 0x319f18u: goto label_319f18;
        case 0x319f4cu: goto label_319f4c;
        case 0x319f88u: goto label_319f88;
        case 0x319fb0u: goto label_319fb0;
        case 0x319fecu: goto label_319fec;
        case 0x31a014u: goto label_31a014;
        case 0x31a040u: goto label_31a040;
        case 0x31a080u: goto label_31a080;
        case 0x31a0b0u: goto label_31a0b0;
        case 0x31a118u: goto label_31a118;
        case 0x31a14cu: goto label_31a14c;
        case 0x31a188u: goto label_31a188;
        case 0x31a1b0u: goto label_31a1b0;
        case 0x31a1ecu: goto label_31a1ec;
        case 0x31a230u: goto label_31a230;
        default: break;
    }

    ctx->pc = 0x319360u;

    // 0x319360: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x319360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x319364: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x319364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x319368: 0x27a30044  addiu       $v1, $sp, 0x44
    ctx->pc = 0x319368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x31936c: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x31936cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x319370: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x319370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x319374: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x319374u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319378: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x319378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x31937c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x31937cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319380: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x319380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x319384: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x319384u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319388: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x319388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x31938c: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x31938cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x319390: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x319390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x319394: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x319394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x319398: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x319398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x31939c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x31939cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3193a0: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x3193a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x3193a4: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x3193a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x3193a8: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x3193a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x3193ac: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x3193acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
label_3193b0:
    // 0x3193b0: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x3193b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3193b4: 0x24120025  addiu       $s2, $zero, 0x25
    ctx->pc = 0x3193b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_3193b8:
    // 0x3193b8: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3193b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3193bc: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x3193bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x3193c0: 0x8ca46ccc  lw          $a0, 0x6CCC($a1)
    ctx->pc = 0x3193c0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x686CCCu));
    // 0x3193c4: 0x8cc77520  lw          $a3, 0x7520($a2)
    ctx->pc = 0x3193c4u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x687520u));
    // 0x3193c8: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x3193c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x3193cc: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x3193ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3193d0: 0xc0c5498  jal         func_315260
    ctx->pc = 0x3193D0u;
    SET_GPR_U32(ctx, 31, 0x3193D8u);
    ctx->pc = 0x3193D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3193D0u;
    // 0x3193d4: 0x8fa80068  lw          $t0, 0x68($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315260u, 0x3193D0u, 0x3193D8u)) {
        return;
    }
    ctx->pc = 0x3193D8u;
label_3193d8:
    // 0x3193d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3193d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3193dc: 0x1a000004  blez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3193DCu;
    {
        const bool branch_taken_0x3193dc = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x3193E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3193DCu;
        // 0x3193e0: 0x97a20040  lhu         $v0, 0x40($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3193dc) {
            ctx->pc = 0x3193F0u;
            goto label_3193f0;
        }
    }
    ctx->pc = 0x3193E4u;
    // 0x3193e4: 0x1452fff4  bne         $v0, $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x3193E4u;
    {
        const bool branch_taken_0x3193e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x3193E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3193E4u;
        // 0x3193e8: 0x2f0b821  addu        $s7, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3193e4) {
            ctx->pc = 0x3193B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3193b8;
        }
    }
    ctx->pc = 0x3193ECu;
    // 0x3193ec: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x3193ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_3193f0:
    // 0x3193f0: 0x2f49023  subu        $s2, $s7, $s4
    ctx->pc = 0x3193f0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    // 0x3193f4: 0x12400028  beqz        $s2, . + 4 + (0x28 << 2)
    ctx->pc = 0x3193F4u;
    {
        const bool branch_taken_0x3193f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3193f4) {
            ctx->pc = 0x319498u;
            goto label_319498;
        }
    }
    ctx->pc = 0x3193FCu;
    // 0x3193fc: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3193fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x319400: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x319400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x319404: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x319404u;
    {
        const bool branch_taken_0x319404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319404) {
            ctx->pc = 0x319408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319404u;
            // 0x319408: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319468u;
            goto label_319468;
        }
    }
    ctx->pc = 0x31940Cu;
    // 0x31940c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x31940cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x319410: 0x246102a  slt         $v0, $s2, $a2
    ctx->pc = 0x319410u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x319414: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x319414u;
    {
        const bool branch_taken_0x319414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319414u;
        // 0x319418: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319414) {
            ctx->pc = 0x319444u;
            goto label_319444;
        }
    }
    ctx->pc = 0x31941Cu;
    // 0x31941c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31941cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x319420: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x319420u;
    SET_GPR_U32(ctx, 31, 0x319428u);
    ctx->pc = 0x319424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319420u;
    // 0x319424: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x319420u, 0x319428u)) {
        return;
    }
    ctx->pc = 0x319428u;
label_319428:
    // 0x319428: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x319428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31942c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x31942cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x319430: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x319430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x319434: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x319434u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x319438: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x319438u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x31943c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x31943Cu;
    {
        const bool branch_taken_0x31943c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31943Cu;
        // 0x319440: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31943c) {
            ctx->pc = 0x31948Cu;
            goto label_31948c;
        }
    }
    ctx->pc = 0x319444u;
label_319444:
    // 0x319444: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x319444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x319448: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x319448u;
    SET_GPR_U32(ctx, 31, 0x319450u);
    ctx->pc = 0x31944Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319448u;
    // 0x31944c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x319448u, 0x319450u)) {
        return;
    }
    ctx->pc = 0x319450u;
label_319450:
    // 0x319450: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x319450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x319454: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x319454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x319458: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x319458u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x31945c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31945cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x319460: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x319460u;
    {
        const bool branch_taken_0x319460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319460u;
        // 0x319464: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319460) {
            ctx->pc = 0x31948Cu;
            goto label_31948c;
        }
    }
    ctx->pc = 0x319468u;
label_319468:
    // 0x319468: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x319468u;
    {
        const bool branch_taken_0x319468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x319468) {
            ctx->pc = 0x31946Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319468u;
            // 0x31946c: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31947Cu;
            goto label_31947c;
        }
    }
    ctx->pc = 0x319470u;
    // 0x319470: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x319470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319474: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x319474u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x319478: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x319478u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_31947c:
    // 0x31947c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x31947cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319480: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x319480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319484: 0xc0c6496  jal         func_319258
    ctx->pc = 0x319484u;
    SET_GPR_U32(ctx, 31, 0x31948Cu);
    ctx->pc = 0x319488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319484u;
    // 0x319488: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x319258u, 0x319484u, 0x31948Cu)) {
        return;
    }
    ctx->pc = 0x31948Cu;
label_31948c:
    // 0x31948c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x31948cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x319490: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x319490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x319494: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x319494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_319498:
    // 0x319498: 0x5a00035d  blezl       $s0, . + 4 + (0x35D << 2)
    ctx->pc = 0x319498u;
    {
        const bool branch_taken_0x319498 = (GPR_S64(ctx, 16) <= 0);
        if (branch_taken_0x319498) {
            ctx->pc = 0x31949Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319498u;
            // 0x31949c: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A210u;
            goto label_31a210;
        }
    }
    ctx->pc = 0x3194A0u;
    // 0x3194a0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3194a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3194a4: 0x5c400006  bgtzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3194A4u;
    {
        const bool branch_taken_0x3194a4 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x3194a4) {
            ctx->pc = 0x3194A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3194A4u;
            // 0x3194a8: 0xa3a00042  sb          $zero, 0x42($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 66), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3194C0u;
            goto label_3194c0;
        }
    }
    ctx->pc = 0x3194ACu;
    // 0x3194ac: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3194acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3194b0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3194b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3194b4: 0x1440035f  bnez        $v0, . + 4 + (0x35F << 2)
    ctx->pc = 0x3194B4u;
    {
        const bool branch_taken_0x3194b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3194B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3194B4u;
        // 0x3194b8: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3194b4) {
            ctx->pc = 0x31A234u;
            goto label_31a234;
        }
    }
    ctx->pc = 0x3194BCu;
    // 0x3194bc: 0xa3a00042  sb          $zero, 0x42($sp)
    ctx->pc = 0x3194bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 66), (uint8_t)GPR_U32(ctx, 0));
label_3194c0:
    // 0x3194c0: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x3194c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x3194c4: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x3194c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x3194c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3194c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3194cc: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x3194ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x3194d0: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x3194d0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3194d4:
    // 0x3194d4: 0x82f50000  lb          $s5, 0x0($s7)
    ctx->pc = 0x3194d4u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_3194d8:
    // 0x3194d8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x3194d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_3194dc:
    // 0x3194dc: 0x26a3ffe0  addiu       $v1, $s5, -0x20
    ctx->pc = 0x3194dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967264));
    // 0x3194e0: 0x2c620059  sltiu       $v0, $v1, 0x59
    ctx->pc = 0x3194e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
    // 0x3194e4: 0x1040014f  beqz        $v0, . + 4 + (0x14F << 2)
    ctx->pc = 0x3194E4u;
    {
        const bool branch_taken_0x3194e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3194E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3194E4u;
        // 0x3194e8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3194e4) {
            ctx->pc = 0x319A24u;
            goto label_319a24;
        }
    }
    ctx->pc = 0x3194ECu;
    // 0x3194ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3194ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3194f0: 0x24421b80  addiu       $v0, $v0, 0x1B80
    ctx->pc = 0x3194f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7040));
    // 0x3194f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3194f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3194f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3194f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3194fc: 0x800008  jr          $a0
    ctx->pc = 0x3194FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x319504u: goto label_319504;
            case 0x31951Cu: goto label_31951c;
            case 0x319524u: goto label_319524;
            case 0x31952Cu: goto label_31952c;
            case 0x319544u: goto label_319544;
            case 0x31954Cu: goto label_31954c;
            case 0x319558u: goto label_319558;
            case 0x3195CCu: goto label_3195cc;
            case 0x3195D4u: goto label_3195d4;
            case 0x319608u: goto label_319608;
            case 0x319610u: goto label_319610;
            case 0x319624u: goto label_319624;
            case 0x31962Cu: goto label_31962c;
            case 0x319658u: goto label_319658;
            case 0x31965Cu: goto label_31965c;
            case 0x3196ACu: goto label_3196ac;
            case 0x319714u: goto label_319714;
            case 0x319718u: goto label_319718;
            case 0x319758u: goto label_319758;
            case 0x31977Cu: goto label_31977c;
            case 0x3197DCu: goto label_3197dc;
            case 0x3197E0u: goto label_3197e0;
            case 0x319820u: goto label_319820;
            case 0x31982Cu: goto label_31982c;
            case 0x319A24u: goto label_319a24;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3194FCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x319504u;
label_319504:
    // 0x319504: 0x83a20042  lb          $v0, 0x42($sp)
    ctx->pc = 0x319504u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 66)));
    // 0x319508: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x319508u;
    {
        const bool branch_taken_0x319508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x319508) {
            ctx->pc = 0x31950Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319508u;
            // 0x31950c: 0x82f50000  lb          $s5, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3194D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3194d8;
        }
    }
    ctx->pc = 0x319510u;
    // 0x319510: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x319510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x319514: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x319514u;
    {
        const bool branch_taken_0x319514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319514u;
        // 0x319518: 0xa3a20042  sb          $v0, 0x42($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 66), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319514) {
            ctx->pc = 0x3194D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3194d4;
        }
    }
    ctx->pc = 0x31951Cu;
label_31951c:
    // 0x31951c: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x31951Cu;
    {
        const bool branch_taken_0x31951c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31951Cu;
        // 0x319520: 0x36520001  ori         $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31951c) {
            ctx->pc = 0x3194D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3194d4;
        }
    }
    ctx->pc = 0x319524u;
label_319524:
    // 0x319524: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x319524u;
    {
        const bool branch_taken_0x319524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319524u;
        // 0x319528: 0x36520200  ori         $s2, $s2, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319524) {
            ctx->pc = 0x3194D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3194d4;
        }
    }
    ctx->pc = 0x31952Cu;
label_31952c:
    // 0x31952c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x31952cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x319530: 0x8e63fff8  lw          $v1, -0x8($s3)
    ctx->pc = 0x319530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x319534: 0x461ffe7  bgez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x319534u;
    {
        const bool branch_taken_0x319534 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x319538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319534u;
        // 0x319538: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319534) {
            ctx->pc = 0x3194D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3194d4;
        }
    }
    ctx->pc = 0x31953Cu;
    // 0x31953c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x31953cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x319540: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x319540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_319544:
    // 0x319544: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x319544u;
    {
        const bool branch_taken_0x319544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319544u;
        // 0x319548: 0x36520004  ori         $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319544) {
            ctx->pc = 0x3194D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3194d4;
        }
    }
    ctx->pc = 0x31954Cu;
label_31954c:
    // 0x31954c: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x31954cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x319550: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x319550u;
    {
        const bool branch_taken_0x319550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319550u;
        // 0x319554: 0xa3a20042  sb          $v0, 0x42($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 66), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319550) {
            ctx->pc = 0x3194D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3194d4;
        }
    }
    ctx->pc = 0x319558u;
label_319558:
    // 0x319558: 0x82f50000  lb          $s5, 0x0($s7)
    ctx->pc = 0x319558u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x31955c: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x31955cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x319560: 0x16a20008  bne         $s5, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x319560u;
    {
        const bool branch_taken_0x319560 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x319564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319560u;
        // 0x319564: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319560) {
            ctx->pc = 0x319584u;
            goto label_319584;
        }
    }
    ctx->pc = 0x319568u;
    // 0x319568: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x319568u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x31956c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x31956cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x319570: 0x8e70fff8  lw          $s0, -0x8($s3)
    ctx->pc = 0x319570u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x319574: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x319574u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x319578: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x319578u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x31957c: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
    ctx->pc = 0x31957Cu;
    {
        const bool branch_taken_0x31957c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31957Cu;
        // 0x319580: 0x202f00b  movn        $fp, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 30, GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31957c) {
            ctx->pc = 0x3194D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3194d4;
        }
    }
    ctx->pc = 0x319584u;
label_319584:
    // 0x319584: 0x26a2ffd0  addiu       $v0, $s5, -0x30
    ctx->pc = 0x319584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967248));
    // 0x319588: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x319588u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x31958c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31958Cu;
    {
        const bool branch_taken_0x31958c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31958Cu;
        // 0x319590: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31958c) {
            ctx->pc = 0x3195B8u;
            goto label_3195b8;
        }
    }
    ctx->pc = 0x319594u;
    // 0x319594: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x319594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_319598:
    // 0x319598: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x319598u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x31959c: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x31959cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x3195a0: 0x558021  addu        $s0, $v0, $s5
    ctx->pc = 0x3195a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x3195a4: 0x82f50000  lb          $s5, 0x0($s7)
    ctx->pc = 0x3195a4u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3195a8: 0x26a2ffd0  addiu       $v0, $s5, -0x30
    ctx->pc = 0x3195a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967248));
    // 0x3195ac: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x3195acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3195b0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3195B0u;
    {
        const bool branch_taken_0x3195b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3195B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3195B0u;
        // 0x3195b4: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3195b0) {
            ctx->pc = 0x319598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_319598;
        }
    }
    ctx->pc = 0x3195B8u;
label_3195b8:
    // 0x3195b8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3195b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3195bc: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x3195bcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3195c0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3195c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3195c4: 0x1000ffc5  b           . + 4 + (-0x3B << 2)
    ctx->pc = 0x3195C4u;
    {
        const bool branch_taken_0x3195c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3195C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3195C4u;
        // 0x3195c8: 0x202f00b  movn        $fp, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 30, GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3195c4) {
            ctx->pc = 0x3194DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3194dc;
        }
    }
    ctx->pc = 0x3195CCu;
label_3195cc:
    // 0x3195cc: 0x1000ffc1  b           . + 4 + (-0x3F << 2)
    ctx->pc = 0x3195CCu;
    {
        const bool branch_taken_0x3195cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3195D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3195CCu;
        // 0x3195d0: 0x36520080  ori         $s2, $s2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3195cc) {
            ctx->pc = 0x3194D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3194d4;
        }
    }
    ctx->pc = 0x3195D4u;
label_3195d4:
    // 0x3195d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3195d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3195d8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3195d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3195dc: 0x0  nop
    ctx->pc = 0x3195dcu;
    // NOP
label_3195e0:
    // 0x3195e0: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x3195e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3195e4: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x3195e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x3195e8: 0x558021  addu        $s0, $v0, $s5
    ctx->pc = 0x3195e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x3195ec: 0x82f50000  lb          $s5, 0x0($s7)
    ctx->pc = 0x3195ecu;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3195f0: 0x26a2ffd0  addiu       $v0, $s5, -0x30
    ctx->pc = 0x3195f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967248));
    // 0x3195f4: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x3195f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3195f8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3195F8u;
    {
        const bool branch_taken_0x3195f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3195FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3195F8u;
        // 0x3195fc: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3195f8) {
            ctx->pc = 0x3195E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3195e0;
        }
    }
    ctx->pc = 0x319600u;
    // 0x319600: 0x1000ffb6  b           . + 4 + (-0x4A << 2)
    ctx->pc = 0x319600u;
    {
        const bool branch_taken_0x319600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319600u;
        // 0x319604: 0xafb00050  sw          $s0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319600) {
            ctx->pc = 0x3194DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3194dc;
        }
    }
    ctx->pc = 0x319608u;
label_319608:
    // 0x319608: 0x1000ffb2  b           . + 4 + (-0x4E << 2)
    ctx->pc = 0x319608u;
    {
        const bool branch_taken_0x319608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319608u;
        // 0x31960c: 0x36520040  ori         $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319608) {
            ctx->pc = 0x3194D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3194d4;
        }
    }
    ctx->pc = 0x319610u;
label_319610:
    // 0x319610: 0x82e30000  lb          $v1, 0x0($s7)
    ctx->pc = 0x319610u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x319614: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x319614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x319618: 0x5462ffae  bnel        $v1, $v0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x319618u;
    {
        const bool branch_taken_0x319618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x319618) {
            ctx->pc = 0x31961Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319618u;
            // 0x31961c: 0x36520010  ori         $s2, $s2, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3194D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3194d4;
        }
    }
    ctx->pc = 0x319620u;
    // 0x319620: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x319620u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_319624:
    // 0x319624: 0x1000ffab  b           . + 4 + (-0x55 << 2)
    ctx->pc = 0x319624u;
    {
        const bool branch_taken_0x319624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319624u;
        // 0x319628: 0x36520020  ori         $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319624) {
            ctx->pc = 0x3194D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3194d4;
        }
    }
    ctx->pc = 0x31962Cu;
label_31962c:
    // 0x31962c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x31962cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x319630: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x319630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319634: 0x9263fff8  lbu         $v1, -0x8($s3)
    ctx->pc = 0x319634u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x319638: 0x32440004  andi        $a0, $s2, 0x4
    ctx->pc = 0x319638u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x31963c: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x31963cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319640: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x319640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x319644: 0x325e0084  andi        $fp, $s2, 0x84
    ctx->pc = 0x319644u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)132);
    // 0x319648: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x319648u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x31964c: 0xafa4006c  sw          $a0, 0x6C($sp)
    ctx->pc = 0x31964cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 4));
    // 0x319650: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x319650u;
    {
        const bool branch_taken_0x319650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319650u;
        // 0x319654: 0xa3a00042  sb          $zero, 0x42($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 66), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319650) {
            ctx->pc = 0x319A48u;
            goto label_319a48;
        }
    }
    ctx->pc = 0x319658u;
label_319658:
    // 0x319658: 0x36520010  ori         $s2, $s2, 0x10
    ctx->pc = 0x319658u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)16);
label_31965c:
    // 0x31965c: 0x32420020  andi        $v0, $s2, 0x20
    ctx->pc = 0x31965cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x319660: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x319660u;
    {
        const bool branch_taken_0x319660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x319660) {
            ctx->pc = 0x319664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319660u;
            // 0x319664: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319678u;
            goto label_319678;
        }
    }
    ctx->pc = 0x319668u;
    // 0x319668: 0x32420010  andi        $v0, $s2, 0x10
    ctx->pc = 0x319668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
    // 0x31966c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31966Cu;
    {
        const bool branch_taken_0x31966c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31966Cu;
        // 0x319670: 0x32420040  andi        $v0, $s2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31966c) {
            ctx->pc = 0x319680u;
            goto label_319680;
        }
    }
    ctx->pc = 0x319674u;
    // 0x319674: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x319674u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_319678:
    // 0x319678: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x319678u;
    {
        const bool branch_taken_0x319678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319678u;
        // 0x31967c: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319678) {
            ctx->pc = 0x319694u;
            goto label_319694;
        }
    }
    ctx->pc = 0x319680u;
label_319680:
    // 0x319680: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x319680u;
    {
        const bool branch_taken_0x319680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319680u;
        // 0x319684: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319680) {
            ctx->pc = 0x319690u;
            goto label_319690;
        }
    }
    ctx->pc = 0x319688u;
    // 0x319688: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x319688u;
    {
        const bool branch_taken_0x319688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319688u;
        // 0x31968c: 0x8670fff8  lh          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319688) {
            ctx->pc = 0x319694u;
            goto label_319694;
        }
    }
    ctx->pc = 0x319690u;
label_319690:
    // 0x319690: 0x8e70fff8  lw          $s0, -0x8($s3)
    ctx->pc = 0x319690u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_319694:
    // 0x319694: 0x601007c  bgez        $s0, . + 4 + (0x7C << 2)
    ctx->pc = 0x319694u;
    {
        const bool branch_taken_0x319694 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x319698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319694u;
        // 0x319698: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319694) {
            ctx->pc = 0x319888u;
            goto label_319888;
        }
    }
    ctx->pc = 0x31969Cu;
    // 0x31969c: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x31969cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x3196a0: 0x10802f  dsubu       $s0, $zero, $s0
    ctx->pc = 0x3196a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
    // 0x3196a4: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x3196A4u;
    {
        const bool branch_taken_0x3196a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3196A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3196A4u;
        // 0x3196a8: 0xa3a20042  sb          $v0, 0x42($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 66), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3196a4) {
            ctx->pc = 0x319888u;
            goto label_319888;
        }
    }
    ctx->pc = 0x3196ACu;
label_3196ac:
    // 0x3196ac: 0x32420020  andi        $v0, $s2, 0x20
    ctx->pc = 0x3196acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x3196b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3196B0u;
    {
        const bool branch_taken_0x3196b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3196B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3196B0u;
        // 0x3196b4: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3196b0) {
            ctx->pc = 0x3196C8u;
            goto label_3196c8;
        }
    }
    ctx->pc = 0x3196B8u;
    // 0x3196b8: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3196b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3196bc: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x3196bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x3196c0: 0x1000ff3b  b           . + 4 + (-0xC5 << 2)
    ctx->pc = 0x3196C0u;
    {
        const bool branch_taken_0x3196c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3196C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3196C0u;
        // 0x3196c4: 0xfc450000  sd          $a1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3196c0) {
            ctx->pc = 0x3193B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3193b0;
        }
    }
    ctx->pc = 0x3196C8u;
label_3196c8:
    // 0x3196c8: 0x32420010  andi        $v0, $s2, 0x10
    ctx->pc = 0x3196c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
    // 0x3196cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3196CCu;
    {
        const bool branch_taken_0x3196cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3196D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3196CCu;
        // 0x3196d0: 0x8fa6004c  lw          $a2, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3196cc) {
            ctx->pc = 0x3196E4u;
            goto label_3196e4;
        }
    }
    ctx->pc = 0x3196D4u;
    // 0x3196d4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3196d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3196d8: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x3196d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x3196dc: 0x1000ff34  b           . + 4 + (-0xCC << 2)
    ctx->pc = 0x3196DCu;
    {
        const bool branch_taken_0x3196dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3196E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3196DCu;
        // 0x3196e0: 0xfc460000  sd          $a2, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3196dc) {
            ctx->pc = 0x3193B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3193b0;
        }
    }
    ctx->pc = 0x3196E4u;
label_3196e4:
    // 0x3196e4: 0x32420040  andi        $v0, $s2, 0x40
    ctx->pc = 0x3196e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
    // 0x3196e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3196E8u;
    {
        const bool branch_taken_0x3196e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3196ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3196E8u;
        // 0x3196ec: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3196e8) {
            ctx->pc = 0x319700u;
            goto label_319700;
        }
    }
    ctx->pc = 0x3196F0u;
    // 0x3196f0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3196f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3196f4: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x3196f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x3196f8: 0x1000ff2d  b           . + 4 + (-0xD3 << 2)
    ctx->pc = 0x3196F8u;
    {
        const bool branch_taken_0x3196f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3196FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3196F8u;
        // 0x3196fc: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3196f8) {
            ctx->pc = 0x3193B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3193b0;
        }
    }
    ctx->pc = 0x319700u;
label_319700:
    // 0x319700: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x319700u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x319704: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x319704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x319708: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x319708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x31970c: 0x1000ff28  b           . + 4 + (-0xD8 << 2)
    ctx->pc = 0x31970Cu;
    {
        const bool branch_taken_0x31970c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31970Cu;
        // 0x319710: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31970c) {
            ctx->pc = 0x3193B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3193b0;
        }
    }
    ctx->pc = 0x319714u;
label_319714:
    // 0x319714: 0x36520010  ori         $s2, $s2, 0x10
    ctx->pc = 0x319714u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)16);
label_319718:
    // 0x319718: 0x32420020  andi        $v0, $s2, 0x20
    ctx->pc = 0x319718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x31971c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x31971Cu;
    {
        const bool branch_taken_0x31971c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31971c) {
            ctx->pc = 0x319720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31971Cu;
            // 0x319720: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319734u;
            goto label_319734;
        }
    }
    ctx->pc = 0x319724u;
    // 0x319724: 0x32420010  andi        $v0, $s2, 0x10
    ctx->pc = 0x319724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
    // 0x319728: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x319728u;
    {
        const bool branch_taken_0x319728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31972Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319728u;
        // 0x31972c: 0x32420040  andi        $v0, $s2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319728) {
            ctx->pc = 0x31973Cu;
            goto label_31973c;
        }
    }
    ctx->pc = 0x319730u;
    // 0x319730: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x319730u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_319734:
    // 0x319734: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x319734u;
    {
        const bool branch_taken_0x319734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319734u;
        // 0x319738: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319734) {
            ctx->pc = 0x319750u;
            goto label_319750;
        }
    }
    ctx->pc = 0x31973Cu;
label_31973c:
    // 0x31973c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31973Cu;
    {
        const bool branch_taken_0x31973c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31973Cu;
        // 0x319740: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31973c) {
            ctx->pc = 0x31974Cu;
            goto label_31974c;
        }
    }
    ctx->pc = 0x319744u;
    // 0x319744: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x319744u;
    {
        const bool branch_taken_0x319744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319744u;
        // 0x319748: 0x9670fff8  lhu         $s0, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319744) {
            ctx->pc = 0x319750u;
            goto label_319750;
        }
    }
    ctx->pc = 0x31974Cu;
label_31974c:
    // 0x31974c: 0x9e70fff8  lwu         $s0, -0x8($s3)
    ctx->pc = 0x31974cu;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_319750:
    // 0x319750: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x319750u;
    {
        const bool branch_taken_0x319750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319750u;
        // 0x319754: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319750) {
            ctx->pc = 0x319884u;
            goto label_319884;
        }
    }
    ctx->pc = 0x319758u;
label_319758:
    // 0x319758: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x319758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x31975c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x31975cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x319760: 0x24421b20  addiu       $v0, $v0, 0x1B20
    ctx->pc = 0x319760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6944));
    // 0x319764: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x319764u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x319768: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x319768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x31976c: 0x36520002  ori         $s2, $s2, 0x2
    ctx->pc = 0x31976cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)2);
    // 0x319770: 0x24150078  addiu       $s5, $zero, 0x78
    ctx->pc = 0x319770u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x319774: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x319774u;
    {
        const bool branch_taken_0x319774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319774u;
        // 0x319778: 0x8e70fff8  lw          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319774) {
            ctx->pc = 0x319884u;
            goto label_319884;
        }
    }
    ctx->pc = 0x31977Cu;
label_31977c:
    // 0x31977c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x31977cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x319780: 0x8e74fff8  lw          $s4, -0x8($s3)
    ctx->pc = 0x319780u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x319784: 0x16800002  bnez        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x319784u;
    {
        const bool branch_taken_0x319784 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x319788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319784u;
        // 0x319788: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319784) {
            ctx->pc = 0x319790u;
            goto label_319790;
        }
    }
    ctx->pc = 0x31978Cu;
    // 0x31978c: 0x24541b38  addiu       $s4, $v0, 0x1B38
    ctx->pc = 0x31978cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 6968));
label_319790:
    // 0x319790: 0x7c0000b  bltz        $fp, . + 4 + (0xB << 2)
    ctx->pc = 0x319790u;
    {
        const bool branch_taken_0x319790 = (GPR_S64(ctx, 30) < 0);
        ctx->pc = 0x319794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319790u;
        // 0x319794: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319790) {
            ctx->pc = 0x3197C0u;
            goto label_3197c0;
        }
    }
    ctx->pc = 0x319798u;
    // 0x319798: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x319798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31979c: 0xc0c489e  jal         func_312278
    ctx->pc = 0x31979Cu;
    SET_GPR_U32(ctx, 31, 0x3197A4u);
    ctx->pc = 0x3197A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31979Cu;
    // 0x3197a0: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312278u, 0x31979Cu, 0x3197A4u)) {
        return;
    }
    ctx->pc = 0x3197A4u;
label_3197a4:
    // 0x3197a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3197A4u;
    {
        const bool branch_taken_0x3197a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3197A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3197A4u;
        // 0x3197a8: 0x541023  subu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3197a4) {
            ctx->pc = 0x3197B8u;
            goto label_3197b8;
        }
    }
    ctx->pc = 0x3197ACu;
    // 0x3197ac: 0x3c2182a  slt         $v1, $fp, $v0
    ctx->pc = 0x3197acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3197b0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3197B0u;
    {
        const bool branch_taken_0x3197b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3197B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3197B0u;
        // 0x3197b4: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3197b0) {
            ctx->pc = 0x3197CCu;
            goto label_3197cc;
        }
    }
    ctx->pc = 0x3197B8u;
label_3197b8:
    // 0x3197b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3197B8u;
    {
        const bool branch_taken_0x3197b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3197BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3197B8u;
        // 0x3197bc: 0xafbe0048  sw          $fp, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3197b8) {
            ctx->pc = 0x3197CCu;
            goto label_3197cc;
        }
    }
    ctx->pc = 0x3197C0u;
label_3197c0:
    // 0x3197c0: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x3197C0u;
    SET_GPR_U32(ctx, 31, 0x3197C8u);
    ctx->pc = 0x3197C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3197C0u;
    // 0x3197c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x3197C0u, 0x3197C8u)) {
        return;
    }
    ctx->pc = 0x3197C8u;
label_3197c8:
    // 0x3197c8: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x3197c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_3197cc:
    // 0x3197cc: 0x32450004  andi        $a1, $s2, 0x4
    ctx->pc = 0x3197ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x3197d0: 0xa3a00042  sb          $zero, 0x42($sp)
    ctx->pc = 0x3197d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 66), (uint8_t)GPR_U32(ctx, 0));
    // 0x3197d4: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x3197D4u;
    {
        const bool branch_taken_0x3197d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3197D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3197D4u;
        // 0x3197d8: 0x325e0084  andi        $fp, $s2, 0x84 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)132);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3197d4) {
            ctx->pc = 0x319A44u;
            goto label_319a44;
        }
    }
    ctx->pc = 0x3197DCu;
label_3197dc:
    // 0x3197dc: 0x36520010  ori         $s2, $s2, 0x10
    ctx->pc = 0x3197dcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)16);
label_3197e0:
    // 0x3197e0: 0x32420020  andi        $v0, $s2, 0x20
    ctx->pc = 0x3197e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x3197e4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3197E4u;
    {
        const bool branch_taken_0x3197e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3197e4) {
            ctx->pc = 0x3197E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3197E4u;
            // 0x3197e8: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3197FCu;
            goto label_3197fc;
        }
    }
    ctx->pc = 0x3197ECu;
    // 0x3197ec: 0x32420010  andi        $v0, $s2, 0x10
    ctx->pc = 0x3197ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
    // 0x3197f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3197F0u;
    {
        const bool branch_taken_0x3197f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3197F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3197F0u;
        // 0x3197f4: 0x32420040  andi        $v0, $s2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3197f0) {
            ctx->pc = 0x319804u;
            goto label_319804;
        }
    }
    ctx->pc = 0x3197F8u;
    // 0x3197f8: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3197f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_3197fc:
    // 0x3197fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3197FCu;
    {
        const bool branch_taken_0x3197fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3197FCu;
        // 0x319800: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3197fc) {
            ctx->pc = 0x319818u;
            goto label_319818;
        }
    }
    ctx->pc = 0x319804u;
label_319804:
    // 0x319804: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x319804u;
    {
        const bool branch_taken_0x319804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319804u;
        // 0x319808: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319804) {
            ctx->pc = 0x319814u;
            goto label_319814;
        }
    }
    ctx->pc = 0x31980Cu;
    // 0x31980c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31980Cu;
    {
        const bool branch_taken_0x31980c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31980Cu;
        // 0x319810: 0x9670fff8  lhu         $s0, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31980c) {
            ctx->pc = 0x319818u;
            goto label_319818;
        }
    }
    ctx->pc = 0x319814u;
label_319814:
    // 0x319814: 0x9e70fff8  lwu         $s0, -0x8($s3)
    ctx->pc = 0x319814u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_319818:
    // 0x319818: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x319818u;
    {
        const bool branch_taken_0x319818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319818u;
        // 0x31981c: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319818) {
            ctx->pc = 0x319884u;
            goto label_319884;
        }
    }
    ctx->pc = 0x319820u;
label_319820:
    // 0x319820: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x319820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x319824: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x319824u;
    {
        const bool branch_taken_0x319824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319824u;
        // 0x319828: 0x24421b40  addiu       $v0, $v0, 0x1B40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319824) {
            ctx->pc = 0x319834u;
            goto label_319834;
        }
    }
    ctx->pc = 0x31982Cu;
label_31982c:
    // 0x31982c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x31982cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x319830: 0x24421b20  addiu       $v0, $v0, 0x1B20
    ctx->pc = 0x319830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6944));
label_319834:
    // 0x319834: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x319834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x319838: 0x32420020  andi        $v0, $s2, 0x20
    ctx->pc = 0x319838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x31983c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x31983Cu;
    {
        const bool branch_taken_0x31983c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31983c) {
            ctx->pc = 0x319840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31983Cu;
            // 0x319840: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319854u;
            goto label_319854;
        }
    }
    ctx->pc = 0x319844u;
    // 0x319844: 0x32420010  andi        $v0, $s2, 0x10
    ctx->pc = 0x319844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
    // 0x319848: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x319848u;
    {
        const bool branch_taken_0x319848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319848u;
        // 0x31984c: 0x32420040  andi        $v0, $s2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319848) {
            ctx->pc = 0x31985Cu;
            goto label_31985c;
        }
    }
    ctx->pc = 0x319850u;
    // 0x319850: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x319850u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_319854:
    // 0x319854: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x319854u;
    {
        const bool branch_taken_0x319854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319854u;
        // 0x319858: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319854) {
            ctx->pc = 0x319870u;
            goto label_319870;
        }
    }
    ctx->pc = 0x31985Cu;
label_31985c:
    // 0x31985c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31985Cu;
    {
        const bool branch_taken_0x31985c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31985Cu;
        // 0x319860: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31985c) {
            ctx->pc = 0x31986Cu;
            goto label_31986c;
        }
    }
    ctx->pc = 0x319864u;
    // 0x319864: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x319864u;
    {
        const bool branch_taken_0x319864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319864u;
        // 0x319868: 0x9670fff8  lhu         $s0, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319864) {
            ctx->pc = 0x319870u;
            goto label_319870;
        }
    }
    ctx->pc = 0x31986Cu;
label_31986c:
    // 0x31986c: 0x9e70fff8  lwu         $s0, -0x8($s3)
    ctx->pc = 0x31986cu;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_319870:
    // 0x319870: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x319870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x319874: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x319874u;
    {
        const bool branch_taken_0x319874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x319878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319874u;
        // 0x319878: 0x24160002  addiu       $s6, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319874) {
            ctx->pc = 0x319884u;
            goto label_319884;
        }
    }
    ctx->pc = 0x31987Cu;
    // 0x31987c: 0x36420002  ori         $v0, $s2, 0x2
    ctx->pc = 0x31987cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)2);
    // 0x319880: 0x50900b  movn        $s2, $v0, $s0
    ctx->pc = 0x319880u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2));
label_319884:
    // 0x319884: 0xa3a00042  sb          $zero, 0x42($sp)
    ctx->pc = 0x319884u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 66), (uint8_t)GPR_U32(ctx, 0));
label_319888:
    // 0x319888: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x319888u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31988c: 0x4c00003  bltz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x31988Cu;
    {
        const bool branch_taken_0x31988c = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x319890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31988Cu;
        // 0x319890: 0xafbe0054  sw          $fp, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31988c) {
            ctx->pc = 0x31989Cu;
            goto label_31989c;
        }
    }
    ctx->pc = 0x319894u;
    // 0x319894: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x319894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x319898: 0x2429024  and         $s2, $s2, $v0
    ctx->pc = 0x319898u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_31989c:
    // 0x31989c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31989Cu;
    {
        const bool branch_taken_0x31989c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3198A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31989Cu;
        // 0x3198a0: 0x27b40028  addiu       $s4, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31989c) {
            ctx->pc = 0x3198B8u;
            goto label_3198b8;
        }
    }
    ctx->pc = 0x3198A4u;
    // 0x3198a4: 0x32420004  andi        $v0, $s2, 0x4
    ctx->pc = 0x3198a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x3198a8: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x3198a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x3198ac: 0x325e0084  andi        $fp, $s2, 0x84
    ctx->pc = 0x3198acu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)132);
    // 0x3198b0: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x3198B0u;
    {
        const bool branch_taken_0x3198b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3198B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3198B0u;
        // 0x3198b4: 0xafa2006c  sw          $v0, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3198b0) {
            ctx->pc = 0x3199E4u;
            goto label_3199e4;
        }
    }
    ctx->pc = 0x3198B8u;
label_3198b8:
    // 0x3198b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3198b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3198bc: 0x12c2001a  beq         $s6, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3198BCu;
    {
        const bool branch_taken_0x3198bc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x3198C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3198BCu;
        // 0x3198c0: 0x32450004  andi        $a1, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3198bc) {
            ctx->pc = 0x319928u;
            goto label_319928;
        }
    }
    ctx->pc = 0x3198C4u;
    // 0x3198c4: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x3198C4u;
    {
        const bool branch_taken_0x3198c4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3198C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3198C4u;
        // 0x3198c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3198c4) {
            ctx->pc = 0x3198DCu;
            goto label_3198dc;
        }
    }
    ctx->pc = 0x3198CCu;
    // 0x3198cc: 0x12c2002e  beq         $s6, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3198CCu;
    {
        const bool branch_taken_0x3198cc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x3198D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3198CCu;
        // 0x3198d0: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3198cc) {
            ctx->pc = 0x319988u;
            goto label_319988;
        }
    }
    ctx->pc = 0x3198D4u;
    // 0x3198d4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x3198D4u;
    {
        const bool branch_taken_0x3198d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3198D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3198D4u;
        // 0x3198d8: 0x32440004  andi        $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3198d4) {
            ctx->pc = 0x3199C8u;
            goto label_3199c8;
        }
    }
    ctx->pc = 0x3198DCu;
label_3198dc:
    // 0x3198dc: 0x32440004  andi        $a0, $s2, 0x4
    ctx->pc = 0x3198dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x3198e0: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x3198e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x3198e4: 0xafa4006c  sw          $a0, 0x6C($sp)
    ctx->pc = 0x3198e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 4));
    // 0x3198e8: 0x325e0084  andi        $fp, $s2, 0x84
    ctx->pc = 0x3198e8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)132);
    // 0x3198ec: 0x0  nop
    ctx->pc = 0x3198ecu;
    // NOP
label_3198f0:
    // 0x3198f0: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x3198f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x3198f4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3198f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x3198f8: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x3198f8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x3198fc: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x3198fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
    // 0x319900: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x319900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x319904: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x319904u;
    {
        const bool branch_taken_0x319904 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x319908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319904u;
        // 0x319908: 0xa2820000  sb          $v0, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319904) {
            ctx->pc = 0x3198F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3198f0;
        }
    }
    ctx->pc = 0x31990Cu;
    // 0x31990c: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x31990Cu;
    {
        const bool branch_taken_0x31990c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x319910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31990Cu;
        // 0x319910: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31990c) {
            ctx->pc = 0x3199E4u;
            goto label_3199e4;
        }
    }
    ctx->pc = 0x319914u;
    // 0x319914: 0x10430034  beq         $v0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x319914u;
    {
        const bool branch_taken_0x319914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x319918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319914u;
        // 0x319918: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319914) {
            ctx->pc = 0x3199E8u;
            goto label_3199e8;
        }
    }
    ctx->pc = 0x31991Cu;
    // 0x31991c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x31991cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x319920: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x319920u;
    {
        const bool branch_taken_0x319920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319920u;
        // 0x319924: 0xa2830000  sb          $v1, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319920) {
            ctx->pc = 0x3199E8u;
            goto label_3199e8;
        }
    }
    ctx->pc = 0x319928u;
label_319928:
    // 0x319928: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x319928u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x31992c: 0x325e0084  andi        $fp, $s2, 0x84
    ctx->pc = 0x31992cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)132);
    // 0x319930: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x319930u;
    {
        const bool branch_taken_0x319930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319930u;
        // 0x319934: 0xafa5006c  sw          $a1, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319930) {
            ctx->pc = 0x319974u;
            goto label_319974;
        }
    }
    ctx->pc = 0x319938u;
    // 0x319938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x319938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31993c: 0x0  nop
    ctx->pc = 0x31993cu;
    // NOP
label_319940:
    // 0x319940: 0xc0ca672  jal         func_3299C8
    ctx->pc = 0x319940u;
    SET_GPR_U32(ctx, 31, 0x319948u);
    ctx->pc = 0x319944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319940u;
    // 0x319944: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3299C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3299C8u, 0x319940u, 0x319948u)) {
        return;
    }
    ctx->pc = 0x319948u;
label_319948:
    // 0x319948: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x319948u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x31994c: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x31994cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x319950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x319950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319954: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x319954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x319958: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x319958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x31995c: 0xc07db0a  jal         func_1F6C28
    ctx->pc = 0x31995Cu;
    SET_GPR_U32(ctx, 31, 0x319964u);
    ctx->pc = 0x319960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31995Cu;
    // 0x319960: 0xa2820000  sb          $v0, 0x0($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6C28u, 0x31995Cu, 0x319964u)) {
        return;
    }
    ctx->pc = 0x319964u;
label_319964:
    // 0x319964: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x319964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319968: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x319968u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x31996c: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x31996Cu;
    {
        const bool branch_taken_0x31996c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31996Cu;
        // 0x319970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31996c) {
            ctx->pc = 0x319940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_319940;
        }
    }
    ctx->pc = 0x319974u;
label_319974:
    // 0x319974: 0x66020030  daddiu      $v0, $s0, 0x30
    ctx->pc = 0x319974u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)48);
    // 0x319978: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x319978u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x31997c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31997cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x319980: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x319980u;
    {
        const bool branch_taken_0x319980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319980u;
        // 0x319984: 0xa2820000  sb          $v0, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319980) {
            ctx->pc = 0x3199E4u;
            goto label_3199e4;
        }
    }
    ctx->pc = 0x319988u;
label_319988:
    // 0x319988: 0x32460004  andi        $a2, $s2, 0x4
    ctx->pc = 0x319988u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x31998c: 0x325e0084  andi        $fp, $s2, 0x84
    ctx->pc = 0x31998cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)132);
    // 0x319990: 0xafa6006c  sw          $a2, 0x6C($sp)
    ctx->pc = 0x319990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 6));
    // 0x319994: 0x0  nop
    ctx->pc = 0x319994u;
    // NOP
label_319998:
    // 0x319998: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x319998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x31999c: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x31999cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x3199a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3199a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3199a4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3199a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3199a8: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3199a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x3199ac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3199acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3199b0: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x3199b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
    // 0x3199b4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3199b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3199b8: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3199B8u;
    {
        const bool branch_taken_0x3199b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3199BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3199B8u;
        // 0x3199bc: 0xa2830000  sb          $v1, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3199b8) {
            ctx->pc = 0x319998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_319998;
        }
    }
    ctx->pc = 0x3199C0u;
    // 0x3199c0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3199C0u;
    {
        const bool branch_taken_0x3199c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3199C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3199C0u;
        // 0x3199c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3199c0) {
            ctx->pc = 0x3199E8u;
            goto label_3199e8;
        }
    }
    ctx->pc = 0x3199C8u;
label_3199c8:
    // 0x3199c8: 0x24541b58  addiu       $s4, $v0, 0x1B58
    ctx->pc = 0x3199c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 7000));
    // 0x3199cc: 0xafa4006c  sw          $a0, 0x6C($sp)
    ctx->pc = 0x3199ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 4));
    // 0x3199d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3199d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3199d4: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x3199D4u;
    SET_GPR_U32(ctx, 31, 0x3199DCu);
    ctx->pc = 0x3199D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3199D4u;
    // 0x3199d8: 0x325e0084  andi        $fp, $s2, 0x84 (Delay Slot)
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)132);
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x3199D4u, 0x3199DCu)) {
        return;
    }
    ctx->pc = 0x3199DCu;
label_3199dc:
    // 0x3199dc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3199DCu;
    {
        const bool branch_taken_0x3199dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3199E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3199DCu;
        // 0x3199e0: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3199dc) {
            ctx->pc = 0x319A48u;
            goto label_319a48;
        }
    }
    ctx->pc = 0x3199E4u;
label_3199e4:
    // 0x3199e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3199e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3199e8:
    // 0x3199e8: 0x16c2000b  bne         $s6, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3199E8u;
    {
        const bool branch_taken_0x3199e8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x3199ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3199E8u;
        // 0x3199ec: 0x2682ffd8  addiu       $v0, $s4, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3199e8) {
            ctx->pc = 0x319A18u;
            goto label_319a18;
        }
    }
    ctx->pc = 0x3199F0u;
    // 0x3199f0: 0x32420200  andi        $v0, $s2, 0x200
    ctx->pc = 0x3199f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)512);
    // 0x3199f4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3199F4u;
    {
        const bool branch_taken_0x3199f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3199F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3199F4u;
        // 0x3199f8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3199f4) {
            ctx->pc = 0x319A14u;
            goto label_319a14;
        }
    }
    ctx->pc = 0x3199FCu;
    // 0x3199fc: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x3199fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x319a00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x319a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319a04: 0xc0c642a  jal         func_3190A8
    ctx->pc = 0x319A04u;
    SET_GPR_U32(ctx, 31, 0x319A0Cu);
    ctx->pc = 0x319A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319A04u;
    // 0x319a08: 0x27a70048  addiu       $a3, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3190A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3190A8u, 0x319A04u, 0x319A0Cu)) {
        return;
    }
    ctx->pc = 0x319A0Cu;
label_319a0c:
    // 0x319a0c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x319A0Cu;
    {
        const bool branch_taken_0x319a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319A0Cu;
        // 0x319a10: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319a0c) {
            ctx->pc = 0x319A48u;
            goto label_319a48;
        }
    }
    ctx->pc = 0x319A14u;
label_319a14:
    // 0x319a14: 0x2682ffd8  addiu       $v0, $s4, -0x28
    ctx->pc = 0x319a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967256));
label_319a18:
    // 0x319a18: 0x3a21823  subu        $v1, $sp, $v0
    ctx->pc = 0x319a18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x319a1c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x319A1Cu;
    {
        const bool branch_taken_0x319a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319A1Cu;
        // 0x319a20: 0xafa30048  sw          $v1, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319a1c) {
            ctx->pc = 0x319A48u;
            goto label_319a48;
        }
    }
    ctx->pc = 0x319A24u;
label_319a24:
    // 0x319a24: 0x12a001f9  beqz        $s5, . + 4 + (0x1F9 << 2)
    ctx->pc = 0x319A24u;
    {
        const bool branch_taken_0x319a24 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x319A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319A24u;
        // 0x319a28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319a24) {
            ctx->pc = 0x31A20Cu;
            goto label_31a20c;
        }
    }
    ctx->pc = 0x319A2Cu;
    // 0x319a2c: 0x32450004  andi        $a1, $s2, 0x4
    ctx->pc = 0x319a2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x319a30: 0xa3b50000  sb          $s5, 0x0($sp)
    ctx->pc = 0x319a30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 21));
    // 0x319a34: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x319a34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319a38: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x319a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x319a3c: 0x325e0084  andi        $fp, $s2, 0x84
    ctx->pc = 0x319a3cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)132);
    // 0x319a40: 0xa3a00042  sb          $zero, 0x42($sp)
    ctx->pc = 0x319a40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 66), (uint8_t)GPR_U32(ctx, 0));
label_319a44:
    // 0x319a44: 0xafa5006c  sw          $a1, 0x6C($sp)
    ctx->pc = 0x319a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 5));
label_319a48:
    // 0x319a48: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x319a48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x319a4c: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x319a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x319a50: 0x83a30042  lb          $v1, 0x42($sp)
    ctx->pc = 0x319a50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 66)));
    // 0x319a54: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x319a54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x319a58: 0xc2200a  movz        $a0, $a2, $v0
    ctx->pc = 0x319a58u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6));
    // 0x319a5c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x319A5Cu;
    {
        const bool branch_taken_0x319a5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x319A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319A5Cu;
        // 0x319a60: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319a5c) {
            ctx->pc = 0x319A70u;
            goto label_319a70;
        }
    }
    ctx->pc = 0x319A64u;
    // 0x319a64: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x319a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x319a68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x319A68u;
    {
        const bool branch_taken_0x319a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319A68u;
        // 0x319a6c: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319a68) {
            ctx->pc = 0x319A80u;
            goto label_319a80;
        }
    }
    ctx->pc = 0x319A70u;
label_319a70:
    // 0x319a70: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x319a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x319a74: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x319a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x319a78: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x319a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x319a7c: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x319a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
label_319a80:
    // 0x319a80: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x319a80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x319a84: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x319a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x319a88: 0xc2302a  slt         $a2, $a2, $v0
    ctx->pc = 0x319a88u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x319a8c: 0x17c00059  bnez        $fp, . + 4 + (0x59 << 2)
    ctx->pc = 0x319A8Cu;
    {
        const bool branch_taken_0x319a8c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x319A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319A8Cu;
        // 0x319a90: 0xafa60060  sw          $a2, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319a8c) {
            ctx->pc = 0x319BF4u;
            goto label_319bf4;
        }
    }
    ctx->pc = 0x319A94u;
    // 0x319a94: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x319a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x319a98: 0x438023  subu        $s0, $v0, $v1
    ctx->pc = 0x319a98u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x319a9c: 0x1a000055  blez        $s0, . + 4 + (0x55 << 2)
    ctx->pc = 0x319A9Cu;
    {
        const bool branch_taken_0x319a9c = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x319AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319A9Cu;
        // 0x319aa0: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319a9c) {
            ctx->pc = 0x319BF4u;
            goto label_319bf4;
        }
    }
    ctx->pc = 0x319AA4u;
    // 0x319aa4: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x319AA4u;
    {
        const bool branch_taken_0x319aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319AA4u;
        // 0x319aa8: 0x3c16006b  lui         $s6, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319aa4) {
            ctx->pc = 0x319B64u;
            goto label_319b64;
        }
    }
    ctx->pc = 0x319AACu;
    // 0x319aac: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x319aacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_319ab0:
    // 0x319ab0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x319ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x319ab4: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x319AB4u;
    {
        const bool branch_taken_0x319ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319ab4) {
            ctx->pc = 0x319AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319AB4u;
            // 0x319ab8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319B30u;
            goto label_319b30;
        }
    }
    ctx->pc = 0x319ABCu;
    // 0x319abc: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x319abcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x319ac0: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x319ac0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x319ac4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x319AC4u;
    {
        const bool branch_taken_0x319ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x319ac4) {
            ctx->pc = 0x319AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319AC4u;
            // 0x319ac8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319B10u;
            goto label_319b10;
        }
    }
    ctx->pc = 0x319ACCu;
    // 0x319acc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x319accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x319ad0: 0x26c31b00  addiu       $v1, $s6, 0x1B00
    ctx->pc = 0x319ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 6912));
    // 0x319ad4: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x319ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x319ad8: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x319ad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x319adc: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x319adcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x319ae0: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x319ae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x319ae4: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x319ae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x319ae8: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x319ae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x319aec: 0xb045000f  sdl         $a1, 0xF($v0)
    ctx->pc = 0x319aecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x319af0: 0xb4450008  sdr         $a1, 0x8($v0)
    ctx->pc = 0x319af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x319af4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x319af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x319af8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x319af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x319afc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x319afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x319b00: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x319b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x319b04: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x319b04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x319b08: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x319B08u;
    {
        const bool branch_taken_0x319b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319B08u;
        // 0x319b0c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319b08) {
            ctx->pc = 0x319B54u;
            goto label_319b54;
        }
    }
    ctx->pc = 0x319B10u;
label_319b10:
    // 0x319b10: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x319B10u;
    SET_GPR_U32(ctx, 31, 0x319B18u);
    ctx->pc = 0x319B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319B10u;
    // 0x319b14: 0x26c51b00  addiu       $a1, $s6, 0x1B00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 6912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x319B10u, 0x319B18u)) {
        return;
    }
    ctx->pc = 0x319B18u;
label_319b18:
    // 0x319b18: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x319b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x319b1c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x319b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x319b20: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x319b20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x319b24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x319b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x319b28: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x319B28u;
    {
        const bool branch_taken_0x319b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319B28u;
        // 0x319b2c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319b28) {
            ctx->pc = 0x319B54u;
            goto label_319b54;
        }
    }
    ctx->pc = 0x319B30u;
label_319b30:
    // 0x319b30: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x319B30u;
    {
        const bool branch_taken_0x319b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x319b30) {
            ctx->pc = 0x319B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319B30u;
            // 0x319b34: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319B44u;
            goto label_319b44;
        }
    }
    ctx->pc = 0x319B38u;
    // 0x319b38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x319b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319b3c: 0xa624000e  sh          $a0, 0xE($s1)
    ctx->pc = 0x319b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x319b40: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x319b40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_319b44:
    // 0x319b44: 0x26c51b00  addiu       $a1, $s6, 0x1B00
    ctx->pc = 0x319b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 6912));
    // 0x319b48: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x319b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x319b4c: 0xc0c6496  jal         func_319258
    ctx->pc = 0x319B4Cu;
    SET_GPR_U32(ctx, 31, 0x319B54u);
    ctx->pc = 0x319B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319B4Cu;
    // 0x319b50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x319258u, 0x319B4Cu, 0x319B54u)) {
        return;
    }
    ctx->pc = 0x319B54u;
label_319b54:
    // 0x319b54: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x319b54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x319b58: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x319b58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x319b5c: 0x5040ffd4  beql        $v0, $zero, . + 4 + (-0x2C << 2)
    ctx->pc = 0x319B5Cu;
    {
        const bool branch_taken_0x319b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319b5c) {
            ctx->pc = 0x319B60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319B5Cu;
            // 0x319b60: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_319ab0;
        }
    }
    ctx->pc = 0x319B64u;
label_319b64:
    // 0x319b64: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x319b64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x319b68: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x319b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x319b6c: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x319B6Cu;
    {
        const bool branch_taken_0x319b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319b6c) {
            ctx->pc = 0x319B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319B6Cu;
            // 0x319b70: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319BD0u;
            goto label_319bd0;
        }
    }
    ctx->pc = 0x319B74u;
    // 0x319b74: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x319b74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x319b78: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x319b78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x319b7c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x319B7Cu;
    {
        const bool branch_taken_0x319b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319B7Cu;
        // 0x319b80: 0x26c51b00  addiu       $a1, $s6, 0x1B00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 6912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319b7c) {
            ctx->pc = 0x319BACu;
            goto label_319bac;
        }
    }
    ctx->pc = 0x319B84u;
    // 0x319b84: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x319b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x319b88: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x319B88u;
    SET_GPR_U32(ctx, 31, 0x319B90u);
    ctx->pc = 0x319B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319B88u;
    // 0x319b8c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x319B88u, 0x319B90u)) {
        return;
    }
    ctx->pc = 0x319B90u;
label_319b90:
    // 0x319b90: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x319b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x319b94: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x319b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x319b98: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x319b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x319b9c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x319b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x319ba0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x319ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x319ba4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x319BA4u;
    {
        const bool branch_taken_0x319ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319BA4u;
        // 0x319ba8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319ba4) {
            ctx->pc = 0x319BF4u;
            goto label_319bf4;
        }
    }
    ctx->pc = 0x319BACu;
label_319bac:
    // 0x319bac: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x319bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x319bb0: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x319BB0u;
    SET_GPR_U32(ctx, 31, 0x319BB8u);
    ctx->pc = 0x319BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319BB0u;
    // 0x319bb4: 0x26c51b00  addiu       $a1, $s6, 0x1B00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 6912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x319BB0u, 0x319BB8u)) {
        return;
    }
    ctx->pc = 0x319BB8u;
label_319bb8:
    // 0x319bb8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x319bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x319bbc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x319bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x319bc0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x319bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x319bc4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x319bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x319bc8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x319BC8u;
    {
        const bool branch_taken_0x319bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319BC8u;
        // 0x319bcc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319bc8) {
            ctx->pc = 0x319BF4u;
            goto label_319bf4;
        }
    }
    ctx->pc = 0x319BD0u;
label_319bd0:
    // 0x319bd0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x319BD0u;
    {
        const bool branch_taken_0x319bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x319bd0) {
            ctx->pc = 0x319BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319BD0u;
            // 0x319bd4: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319BE4u;
            goto label_319be4;
        }
    }
    ctx->pc = 0x319BD8u;
    // 0x319bd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x319bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319bdc: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x319bdcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x319be0: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x319be0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_319be4:
    // 0x319be4: 0x26c51b00  addiu       $a1, $s6, 0x1B00
    ctx->pc = 0x319be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 6912));
    // 0x319be8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x319be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319bec: 0xc0c6496  jal         func_319258
    ctx->pc = 0x319BECu;
    SET_GPR_U32(ctx, 31, 0x319BF4u);
    ctx->pc = 0x319BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319BECu;
    // 0x319bf0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x319258u, 0x319BECu, 0x319BF4u)) {
        return;
    }
    ctx->pc = 0x319BF4u;
label_319bf4:
    // 0x319bf4: 0x83a20042  lb          $v0, 0x42($sp)
    ctx->pc = 0x319bf4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 66)));
    // 0x319bf8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x319BF8u;
    {
        const bool branch_taken_0x319bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319BF8u;
        // 0x319bfc: 0x93a30042  lbu         $v1, 0x42($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 66)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319bf8) {
            ctx->pc = 0x319C70u;
            goto label_319c70;
        }
    }
    ctx->pc = 0x319C00u;
    // 0x319c00: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x319c00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x319c04: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x319c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x319c08: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x319C08u;
    {
        const bool branch_taken_0x319c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319c08) {
            ctx->pc = 0x319C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319C08u;
            // 0x319c0c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319C44u;
            goto label_319c44;
        }
    }
    ctx->pc = 0x319C10u;
    // 0x319c10: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x319c10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x319c14: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x319c14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x319c18: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x319C18u;
    {
        const bool branch_taken_0x319c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x319c18) {
            ctx->pc = 0x319C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319C18u;
            // 0x319c1c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319C3Cu;
            goto label_319c3c;
        }
    }
    ctx->pc = 0x319C20u;
    // 0x319c20: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x319c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x319c24: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x319c24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x319c28: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x319c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x319c2c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x319c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x319c30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x319c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x319c34: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x319C34u;
    {
        const bool branch_taken_0x319c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319C34u;
        // 0x319c38: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319c34) {
            ctx->pc = 0x319CC4u;
            goto label_319cc4;
        }
    }
    ctx->pc = 0x319C3Cu;
label_319c3c:
    // 0x319c3c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x319C3Cu;
    {
        const bool branch_taken_0x319c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319C3Cu;
        // 0x319c40: 0x27a50042  addiu       $a1, $sp, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319c3c) {
            ctx->pc = 0x319CD4u;
            goto label_319cd4;
        }
    }
    ctx->pc = 0x319C44u;
label_319c44:
    // 0x319c44: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x319C44u;
    {
        const bool branch_taken_0x319c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x319c44) {
            ctx->pc = 0x319C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319C44u;
            // 0x319c48: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319C58u;
            goto label_319c58;
        }
    }
    ctx->pc = 0x319C4Cu;
    // 0x319c4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x319c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319c50: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x319c50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x319c54: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x319c54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_319c58:
    // 0x319c58: 0x27a50042  addiu       $a1, $sp, 0x42
    ctx->pc = 0x319c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 66));
    // 0x319c5c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x319c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319c60: 0xc0c6496  jal         func_319258
    ctx->pc = 0x319C60u;
    SET_GPR_U32(ctx, 31, 0x319C68u);
    ctx->pc = 0x319C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319C60u;
    // 0x319c64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x319258u, 0x319C60u, 0x319C68u)) {
        return;
    }
    ctx->pc = 0x319C68u;
label_319c68:
    // 0x319c68: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x319C68u;
    {
        const bool branch_taken_0x319c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319C68u;
        // 0x319c6c: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319c68) {
            ctx->pc = 0x319D20u;
            goto label_319d20;
        }
    }
    ctx->pc = 0x319C70u;
label_319c70:
    // 0x319c70: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x319c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x319c74: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x319C74u;
    {
        const bool branch_taken_0x319c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319C74u;
        // 0x319c78: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319c74) {
            ctx->pc = 0x319D1Cu;
            goto label_319d1c;
        }
    }
    ctx->pc = 0x319C7Cu;
    // 0x319c7c: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x319c7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x319c80: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x319c80u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x319c84: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x319c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x319c88: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x319C88u;
    {
        const bool branch_taken_0x319c88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x319C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319C88u;
        // 0x319c8c: 0xa3b50031  sb          $s5, 0x31($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319c88) {
            ctx->pc = 0x319CF4u;
            goto label_319cf4;
        }
    }
    ctx->pc = 0x319C90u;
    // 0x319c90: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x319c90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x319c94: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x319c94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x319c98: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x319C98u;
    {
        const bool branch_taken_0x319c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x319c98) {
            ctx->pc = 0x319C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319C98u;
            // 0x319c9c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319CD0u;
            goto label_319cd0;
        }
    }
    ctx->pc = 0x319CA0u;
    // 0x319ca0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x319ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x319ca4: 0x83a50030  lb          $a1, 0x30($sp)
    ctx->pc = 0x319ca4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x319ca8: 0x83a60031  lb          $a2, 0x31($sp)
    ctx->pc = 0x319ca8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 49)));
    // 0x319cac: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x319cacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x319cb0: 0xa0460001  sb          $a2, 0x1($v0)
    ctx->pc = 0x319cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x319cb4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x319cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x319cb8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x319cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x319cbc: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x319cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x319cc0: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x319cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_319cc4:
    // 0x319cc4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x319cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x319cc8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x319CC8u;
    {
        const bool branch_taken_0x319cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319CC8u;
        // 0x319ccc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319cc8) {
            ctx->pc = 0x319D1Cu;
            goto label_319d1c;
        }
    }
    ctx->pc = 0x319CD0u;
label_319cd0:
    // 0x319cd0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x319cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_319cd4:
    // 0x319cd4: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x319CD4u;
    SET_GPR_U32(ctx, 31, 0x319CDCu);
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x319CD4u, 0x319CDCu)) {
        return;
    }
    ctx->pc = 0x319CDCu;
label_319cdc:
    // 0x319cdc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x319cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x319ce0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x319ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x319ce4: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x319ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x319ce8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x319ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x319cec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x319CECu;
    {
        const bool branch_taken_0x319cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319CECu;
        // 0x319cf0: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319cec) {
            ctx->pc = 0x319D1Cu;
            goto label_319d1c;
        }
    }
    ctx->pc = 0x319CF4u;
label_319cf4:
    // 0x319cf4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x319cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x319cf8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x319CF8u;
    {
        const bool branch_taken_0x319cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x319cf8) {
            ctx->pc = 0x319CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319CF8u;
            // 0x319cfc: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319D0Cu;
            goto label_319d0c;
        }
    }
    ctx->pc = 0x319D00u;
    // 0x319d00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x319d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319d04: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x319d04u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x319d08: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x319d08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_319d0c:
    // 0x319d0c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x319d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x319d10: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x319d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x319d14: 0xc0c6496  jal         func_319258
    ctx->pc = 0x319D14u;
    SET_GPR_U32(ctx, 31, 0x319D1Cu);
    ctx->pc = 0x319D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319D14u;
    // 0x319d18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x319258u, 0x319D14u, 0x319D1Cu)) {
        return;
    }
    ctx->pc = 0x319D1Cu;
label_319d1c:
    // 0x319d1c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x319d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_319d20:
    // 0x319d20: 0x17c2005b  bne         $fp, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x319D20u;
    {
        const bool branch_taken_0x319d20 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x319D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319D20u;
        // 0x319d24: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319d20) {
            ctx->pc = 0x319E90u;
            goto label_319e90;
        }
    }
    ctx->pc = 0x319D28u;
    // 0x319d28: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x319d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x319d2c: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x319d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x319d30: 0xa68023  subu        $s0, $a1, $a2
    ctx->pc = 0x319d30u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x319d34: 0x1a000055  blez        $s0, . + 4 + (0x55 << 2)
    ctx->pc = 0x319D34u;
    {
        const bool branch_taken_0x319d34 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x319D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319D34u;
        // 0x319d38: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319d34) {
            ctx->pc = 0x319E8Cu;
            goto label_319e8c;
        }
    }
    ctx->pc = 0x319D3Cu;
    // 0x319d3c: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x319D3Cu;
    {
        const bool branch_taken_0x319d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319D3Cu;
        // 0x319d40: 0x3c12006b  lui         $s2, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319d3c) {
            ctx->pc = 0x319DFCu;
            goto label_319dfc;
        }
    }
    ctx->pc = 0x319D44u;
    // 0x319d44: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x319d44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319d48: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x319d48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x319d4c: 0x0  nop
    ctx->pc = 0x319d4cu;
    // NOP
label_319d50:
    // 0x319d50: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x319d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x319d54: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x319D54u;
    {
        const bool branch_taken_0x319d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319d54) {
            ctx->pc = 0x319D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319D54u;
            // 0x319d58: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319DD0u;
            goto label_319dd0;
        }
    }
    ctx->pc = 0x319D5Cu;
    // 0x319d5c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x319d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x319d60: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x319d60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x319d64: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x319D64u;
    {
        const bool branch_taken_0x319d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x319d64) {
            ctx->pc = 0x319D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319D64u;
            // 0x319d68: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319DB0u;
            goto label_319db0;
        }
    }
    ctx->pc = 0x319D6Cu;
    // 0x319d6c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x319d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x319d70: 0x26461b10  addiu       $a2, $s2, 0x1B10
    ctx->pc = 0x319d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 6928));
    // 0x319d74: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x319d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x319d78: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x319d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x319d7c: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x319d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x319d80: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x319d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x319d84: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x319d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x319d88: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x319d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x319d8c: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x319d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x319d90: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x319d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x319d94: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x319d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x319d98: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x319d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x319d9c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x319d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x319da0: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x319da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x319da4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x319da4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x319da8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x319DA8u;
    {
        const bool branch_taken_0x319da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319DA8u;
        // 0x319dac: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319da8) {
            ctx->pc = 0x319DECu;
            goto label_319dec;
        }
    }
    ctx->pc = 0x319DB0u;
label_319db0:
    // 0x319db0: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x319DB0u;
    SET_GPR_U32(ctx, 31, 0x319DB8u);
    ctx->pc = 0x319DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319DB0u;
    // 0x319db4: 0x26451b10  addiu       $a1, $s2, 0x1B10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x319DB0u, 0x319DB8u)) {
        return;
    }
    ctx->pc = 0x319DB8u;
label_319db8:
    // 0x319db8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x319db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x319dbc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x319dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x319dc0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x319dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x319dc4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x319dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x319dc8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x319DC8u;
    {
        const bool branch_taken_0x319dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319DC8u;
        // 0x319dcc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319dc8) {
            ctx->pc = 0x319DECu;
            goto label_319dec;
        }
    }
    ctx->pc = 0x319DD0u;
label_319dd0:
    // 0x319dd0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x319DD0u;
    {
        const bool branch_taken_0x319dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319dd0) {
            ctx->pc = 0x319DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319DD0u;
            // 0x319dd4: 0xa635000e  sh          $s5, 0xE($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319DD8u;
            goto label_319dd8;
        }
    }
    ctx->pc = 0x319DD8u;
label_319dd8:
    // 0x319dd8: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x319dd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x319ddc: 0x26451b10  addiu       $a1, $s2, 0x1B10
    ctx->pc = 0x319ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6928));
    // 0x319de0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x319de0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x319de4: 0xc0c6496  jal         func_319258
    ctx->pc = 0x319DE4u;
    SET_GPR_U32(ctx, 31, 0x319DECu);
    ctx->pc = 0x319DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319DE4u;
    // 0x319de8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x319258u, 0x319DE4u, 0x319DECu)) {
        return;
    }
    ctx->pc = 0x319DECu;
label_319dec:
    // 0x319dec: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x319decu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x319df0: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x319df0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x319df4: 0x5040ffd6  beql        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x319DF4u;
    {
        const bool branch_taken_0x319df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319df4) {
            ctx->pc = 0x319DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319DF4u;
            // 0x319df8: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_319d50;
        }
    }
    ctx->pc = 0x319DFCu;
label_319dfc:
    // 0x319dfc: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x319dfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x319e00: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x319e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x319e04: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x319E04u;
    {
        const bool branch_taken_0x319e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319e04) {
            ctx->pc = 0x319E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319E04u;
            // 0x319e08: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319E68u;
            goto label_319e68;
        }
    }
    ctx->pc = 0x319E0Cu;
    // 0x319e0c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x319e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x319e10: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x319e10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x319e14: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x319E14u;
    {
        const bool branch_taken_0x319e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319E14u;
        // 0x319e18: 0x26451b10  addiu       $a1, $s2, 0x1B10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319e14) {
            ctx->pc = 0x319E44u;
            goto label_319e44;
        }
    }
    ctx->pc = 0x319E1Cu;
    // 0x319e1c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x319e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x319e20: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x319E20u;
    SET_GPR_U32(ctx, 31, 0x319E28u);
    ctx->pc = 0x319E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319E20u;
    // 0x319e24: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x319E20u, 0x319E28u)) {
        return;
    }
    ctx->pc = 0x319E28u;
label_319e28:
    // 0x319e28: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x319e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x319e2c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x319e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x319e30: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x319e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x319e34: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x319e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x319e38: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x319e38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x319e3c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x319E3Cu;
    {
        const bool branch_taken_0x319e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319E3Cu;
        // 0x319e40: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319e3c) {
            ctx->pc = 0x319E8Cu;
            goto label_319e8c;
        }
    }
    ctx->pc = 0x319E44u;
label_319e44:
    // 0x319e44: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x319e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x319e48: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x319E48u;
    SET_GPR_U32(ctx, 31, 0x319E50u);
    ctx->pc = 0x319E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319E48u;
    // 0x319e4c: 0x26451b10  addiu       $a1, $s2, 0x1B10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x319E48u, 0x319E50u)) {
        return;
    }
    ctx->pc = 0x319E50u;
label_319e50:
    // 0x319e50: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x319e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x319e54: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x319e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x319e58: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x319e58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x319e5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x319e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x319e60: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x319E60u;
    {
        const bool branch_taken_0x319e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319E60u;
        // 0x319e64: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319e60) {
            ctx->pc = 0x319E8Cu;
            goto label_319e8c;
        }
    }
    ctx->pc = 0x319E68u;
label_319e68:
    // 0x319e68: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x319E68u;
    {
        const bool branch_taken_0x319e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x319e68) {
            ctx->pc = 0x319E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319E68u;
            // 0x319e6c: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319E7Cu;
            goto label_319e7c;
        }
    }
    ctx->pc = 0x319E70u;
    // 0x319e70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x319e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319e74: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x319e74u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x319e78: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x319e78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_319e7c:
    // 0x319e7c: 0x26451b10  addiu       $a1, $s2, 0x1B10
    ctx->pc = 0x319e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6928));
    // 0x319e80: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x319e80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319e84: 0xc0c6496  jal         func_319258
    ctx->pc = 0x319E84u;
    SET_GPR_U32(ctx, 31, 0x319E8Cu);
    ctx->pc = 0x319E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319E84u;
    // 0x319e88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x319258u, 0x319E84u, 0x319E8Cu)) {
        return;
    }
    ctx->pc = 0x319E8Cu;
label_319e8c:
    // 0x319e8c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x319e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_319e90:
    // 0x319e90: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x319e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x319e94: 0x628023  subu        $s0, $v1, $v0
    ctx->pc = 0x319e94u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x319e98: 0x1a000054  blez        $s0, . + 4 + (0x54 << 2)
    ctx->pc = 0x319E98u;
    {
        const bool branch_taken_0x319e98 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x319E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319E98u;
        // 0x319e9c: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319e98) {
            ctx->pc = 0x319FECu;
            goto label_319fec;
        }
    }
    ctx->pc = 0x319EA0u;
    // 0x319ea0: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x319EA0u;
    {
        const bool branch_taken_0x319ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319EA0u;
        // 0x319ea4: 0x3c12006b  lui         $s2, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319ea0) {
            ctx->pc = 0x319F5Cu;
            goto label_319f5c;
        }
    }
    ctx->pc = 0x319EA8u;
    // 0x319ea8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x319ea8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319eac: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x319eacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_319eb0:
    // 0x319eb0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x319eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x319eb4: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x319EB4u;
    {
        const bool branch_taken_0x319eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319eb4) {
            ctx->pc = 0x319EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319EB4u;
            // 0x319eb8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319F30u;
            goto label_319f30;
        }
    }
    ctx->pc = 0x319EBCu;
    // 0x319ebc: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x319ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x319ec0: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x319ec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x319ec4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x319EC4u;
    {
        const bool branch_taken_0x319ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x319ec4) {
            ctx->pc = 0x319EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319EC4u;
            // 0x319ec8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319F10u;
            goto label_319f10;
        }
    }
    ctx->pc = 0x319ECCu;
    // 0x319ecc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x319eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x319ed0: 0x26431b10  addiu       $v1, $s2, 0x1B10
    ctx->pc = 0x319ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 6928));
    // 0x319ed4: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x319ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x319ed8: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x319ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x319edc: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x319edcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x319ee0: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x319ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x319ee4: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x319ee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x319ee8: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x319ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x319eec: 0xb045000f  sdl         $a1, 0xF($v0)
    ctx->pc = 0x319eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x319ef0: 0xb4450008  sdr         $a1, 0x8($v0)
    ctx->pc = 0x319ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x319ef4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x319ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x319ef8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x319ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x319efc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x319efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x319f00: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x319f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x319f04: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x319f04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x319f08: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x319F08u;
    {
        const bool branch_taken_0x319f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F08u;
        // 0x319f0c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319f08) {
            ctx->pc = 0x319F4Cu;
            goto label_319f4c;
        }
    }
    ctx->pc = 0x319F10u;
label_319f10:
    // 0x319f10: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x319F10u;
    SET_GPR_U32(ctx, 31, 0x319F18u);
    ctx->pc = 0x319F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319F10u;
    // 0x319f14: 0x26451b10  addiu       $a1, $s2, 0x1B10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x319F10u, 0x319F18u)) {
        return;
    }
    ctx->pc = 0x319F18u;
label_319f18:
    // 0x319f18: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x319f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x319f1c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x319f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x319f20: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x319f20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x319f24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x319f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x319f28: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x319F28u;
    {
        const bool branch_taken_0x319f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F28u;
        // 0x319f2c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319f28) {
            ctx->pc = 0x319F4Cu;
            goto label_319f4c;
        }
    }
    ctx->pc = 0x319F30u;
label_319f30:
    // 0x319f30: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x319F30u;
    {
        const bool branch_taken_0x319f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319f30) {
            ctx->pc = 0x319F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319F30u;
            // 0x319f34: 0xa635000e  sh          $s5, 0xE($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319F38u;
            goto label_319f38;
        }
    }
    ctx->pc = 0x319F38u;
label_319f38:
    // 0x319f38: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x319f38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x319f3c: 0x26451b10  addiu       $a1, $s2, 0x1B10
    ctx->pc = 0x319f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6928));
    // 0x319f40: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x319f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x319f44: 0xc0c6496  jal         func_319258
    ctx->pc = 0x319F44u;
    SET_GPR_U32(ctx, 31, 0x319F4Cu);
    ctx->pc = 0x319F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319F44u;
    // 0x319f48: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x319258u, 0x319F44u, 0x319F4Cu)) {
        return;
    }
    ctx->pc = 0x319F4Cu;
label_319f4c:
    // 0x319f4c: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x319f4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x319f50: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x319f50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x319f54: 0x5040ffd6  beql        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x319F54u;
    {
        const bool branch_taken_0x319f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319f54) {
            ctx->pc = 0x319F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319F54u;
            // 0x319f58: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_319eb0;
        }
    }
    ctx->pc = 0x319F5Cu;
label_319f5c:
    // 0x319f5c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x319f5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x319f60: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x319f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x319f64: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x319F64u;
    {
        const bool branch_taken_0x319f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319f64) {
            ctx->pc = 0x319F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319F64u;
            // 0x319f68: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319FC8u;
            goto label_319fc8;
        }
    }
    ctx->pc = 0x319F6Cu;
    // 0x319f6c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x319f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x319f70: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x319f70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x319f74: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x319F74u;
    {
        const bool branch_taken_0x319f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F74u;
        // 0x319f78: 0x26451b10  addiu       $a1, $s2, 0x1B10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319f74) {
            ctx->pc = 0x319FA4u;
            goto label_319fa4;
        }
    }
    ctx->pc = 0x319F7Cu;
    // 0x319f7c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x319f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x319f80: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x319F80u;
    SET_GPR_U32(ctx, 31, 0x319F88u);
    ctx->pc = 0x319F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319F80u;
    // 0x319f84: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x319F80u, 0x319F88u)) {
        return;
    }
    ctx->pc = 0x319F88u;
label_319f88:
    // 0x319f88: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x319f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x319f8c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x319f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x319f90: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x319f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x319f94: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x319f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x319f98: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x319f98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x319f9c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x319F9Cu;
    {
        const bool branch_taken_0x319f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F9Cu;
        // 0x319fa0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319f9c) {
            ctx->pc = 0x319FECu;
            goto label_319fec;
        }
    }
    ctx->pc = 0x319FA4u;
label_319fa4:
    // 0x319fa4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x319fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x319fa8: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x319FA8u;
    SET_GPR_U32(ctx, 31, 0x319FB0u);
    ctx->pc = 0x319FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319FA8u;
    // 0x319fac: 0x26451b10  addiu       $a1, $s2, 0x1B10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x319FA8u, 0x319FB0u)) {
        return;
    }
    ctx->pc = 0x319FB0u;
label_319fb0:
    // 0x319fb0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x319fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x319fb4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x319fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x319fb8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x319fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x319fbc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x319fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x319fc0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x319FC0u;
    {
        const bool branch_taken_0x319fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319FC0u;
        // 0x319fc4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319fc0) {
            ctx->pc = 0x319FECu;
            goto label_319fec;
        }
    }
    ctx->pc = 0x319FC8u;
label_319fc8:
    // 0x319fc8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x319FC8u;
    {
        const bool branch_taken_0x319fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x319fc8) {
            ctx->pc = 0x319FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319FC8u;
            // 0x319fcc: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319FDCu;
            goto label_319fdc;
        }
    }
    ctx->pc = 0x319FD0u;
    // 0x319fd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x319fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319fd4: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x319fd4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x319fd8: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x319fd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_319fdc:
    // 0x319fdc: 0x26451b10  addiu       $a1, $s2, 0x1B10
    ctx->pc = 0x319fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6928));
    // 0x319fe0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x319fe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319fe4: 0xc0c6496  jal         func_319258
    ctx->pc = 0x319FE4u;
    SET_GPR_U32(ctx, 31, 0x319FECu);
    ctx->pc = 0x319FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319FE4u;
    // 0x319fe8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x319258u, 0x319FE4u, 0x319FECu)) {
        return;
    }
    ctx->pc = 0x319FECu;
label_319fec:
    // 0x319fec: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x319fecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x319ff0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x319ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x319ff4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x319FF4u;
    {
        const bool branch_taken_0x319ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319FF4u;
        // 0x319ff8: 0x8fa60048  lw          $a2, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319ff4) {
            ctx->pc = 0x31A058u;
            goto label_31a058;
        }
    }
    ctx->pc = 0x319FFCu;
    // 0x319ffc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x319ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31a000: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x31a000u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x31a004: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31A004u;
    {
        const bool branch_taken_0x31a004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A004u;
        // 0x31a008: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a004) {
            ctx->pc = 0x31A034u;
            goto label_31a034;
        }
    }
    ctx->pc = 0x31A00Cu;
    // 0x31a00c: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x31A00Cu;
    SET_GPR_U32(ctx, 31, 0x31A014u);
    ctx->pc = 0x31A010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A00Cu;
    // 0x31a010: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x31A00Cu, 0x31A014u)) {
        return;
    }
    ctx->pc = 0x31A014u;
label_31a014:
    // 0x31a014: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31a014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31a018: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31a018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31a01c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x31a01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31a020: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31a020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31a024: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x31a024u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31a028: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x31a028u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x31a02c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x31A02Cu;
    {
        const bool branch_taken_0x31a02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A02Cu;
        // 0x31a030: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a02c) {
            ctx->pc = 0x31A080u;
            goto label_31a080;
        }
    }
    ctx->pc = 0x31A034u;
label_31a034:
    // 0x31a034: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x31a034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a038: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x31A038u;
    SET_GPR_U32(ctx, 31, 0x31A040u);
    ctx->pc = 0x31A03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A038u;
    // 0x31a03c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x31A038u, 0x31A040u)) {
        return;
    }
    ctx->pc = 0x31A040u;
label_31a040:
    // 0x31a040: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31a040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31a044: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x31a044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31a048: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x31a048u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x31a04c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31a04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31a050: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x31A050u;
    {
        const bool branch_taken_0x31a050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A050u;
        // 0x31a054: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a050) {
            ctx->pc = 0x31A080u;
            goto label_31a080;
        }
    }
    ctx->pc = 0x31A058u;
label_31a058:
    // 0x31a058: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x31a058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31a05c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31A05Cu;
    {
        const bool branch_taken_0x31a05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31a05c) {
            ctx->pc = 0x31A060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A05Cu;
            // 0x31a060: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A070u;
            goto label_31a070;
        }
    }
    ctx->pc = 0x31A064u;
    // 0x31a064: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31a064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a068: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x31a068u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x31a06c: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x31a06cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_31a070:
    // 0x31a070: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x31a070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a074: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x31a074u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31a078: 0xc0c6496  jal         func_319258
    ctx->pc = 0x31A078u;
    SET_GPR_U32(ctx, 31, 0x31A080u);
    ctx->pc = 0x31A07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A078u;
    // 0x31a07c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x319258u, 0x31A078u, 0x31A080u)) {
        return;
    }
    ctx->pc = 0x31A080u;
label_31a080:
    // 0x31a080: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x31a080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x31a084: 0x10800059  beqz        $a0, . + 4 + (0x59 << 2)
    ctx->pc = 0x31A084u;
    {
        const bool branch_taken_0x31a084 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A084u;
        // 0x31a088: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a084) {
            ctx->pc = 0x31A1ECu;
            goto label_31a1ec;
        }
    }
    ctx->pc = 0x31A08Cu;
    // 0x31a08c: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x31a08cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31a090: 0xa68023  subu        $s0, $a1, $a2
    ctx->pc = 0x31a090u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x31a094: 0x1a000055  blez        $s0, . + 4 + (0x55 << 2)
    ctx->pc = 0x31A094u;
    {
        const bool branch_taken_0x31a094 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x31A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A094u;
        // 0x31a098: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a094) {
            ctx->pc = 0x31A1ECu;
            goto label_31a1ec;
        }
    }
    ctx->pc = 0x31A09Cu;
    // 0x31a09c: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x31A09Cu;
    {
        const bool branch_taken_0x31a09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A09Cu;
        // 0x31a0a0: 0x3c16006b  lui         $s6, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a09c) {
            ctx->pc = 0x31A15Cu;
            goto label_31a15c;
        }
    }
    ctx->pc = 0x31A0A4u;
    // 0x31a0a4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x31a0a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a0a8: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x31a0a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31a0ac: 0x0  nop
    ctx->pc = 0x31a0acu;
    // NOP
label_31a0b0:
    // 0x31a0b0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x31a0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x31a0b4: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x31A0B4u;
    {
        const bool branch_taken_0x31a0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a0b4) {
            ctx->pc = 0x31A0B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A0B4u;
            // 0x31a0b8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A130u;
            goto label_31a130;
        }
    }
    ctx->pc = 0x31A0BCu;
    // 0x31a0bc: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x31a0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31a0c0: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x31a0c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x31a0c4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x31A0C4u;
    {
        const bool branch_taken_0x31a0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31a0c4) {
            ctx->pc = 0x31A0C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A0C4u;
            // 0x31a0c8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A110u;
            goto label_31a110;
        }
    }
    ctx->pc = 0x31A0CCu;
    // 0x31a0cc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31a0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31a0d0: 0x26c61b00  addiu       $a2, $s6, 0x1B00
    ctx->pc = 0x31a0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 6912));
    // 0x31a0d4: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x31a0d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x31a0d8: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x31a0d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x31a0dc: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x31a0dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x31a0e0: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x31a0e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x31a0e4: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x31a0e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31a0e8: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x31a0e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31a0ec: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x31a0ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31a0f0: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x31a0f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31a0f4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31a0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31a0f8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x31a0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31a0fc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x31a0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x31a100: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x31a100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x31a104: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x31a104u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x31a108: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x31A108u;
    {
        const bool branch_taken_0x31a108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A108u;
        // 0x31a10c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a108) {
            ctx->pc = 0x31A14Cu;
            goto label_31a14c;
        }
    }
    ctx->pc = 0x31A110u;
label_31a110:
    // 0x31a110: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x31A110u;
    SET_GPR_U32(ctx, 31, 0x31A118u);
    ctx->pc = 0x31A114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A110u;
    // 0x31a114: 0x26c51b00  addiu       $a1, $s6, 0x1B00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 6912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x31A110u, 0x31A118u)) {
        return;
    }
    ctx->pc = 0x31A118u;
label_31a118:
    // 0x31a118: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31a118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31a11c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x31a11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31a120: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x31a120u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x31a124: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31a124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31a128: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31A128u;
    {
        const bool branch_taken_0x31a128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A128u;
        // 0x31a12c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a128) {
            ctx->pc = 0x31A14Cu;
            goto label_31a14c;
        }
    }
    ctx->pc = 0x31A130u;
label_31a130:
    // 0x31a130: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x31A130u;
    {
        const bool branch_taken_0x31a130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a130) {
            ctx->pc = 0x31A134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A130u;
            // 0x31a134: 0xa632000e  sh          $s2, 0xE($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A138u;
            goto label_31a138;
        }
    }
    ctx->pc = 0x31A138u;
label_31a138:
    // 0x31a138: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x31a138u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x31a13c: 0x26c51b00  addiu       $a1, $s6, 0x1B00
    ctx->pc = 0x31a13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 6912));
    // 0x31a140: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x31a140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x31a144: 0xc0c6496  jal         func_319258
    ctx->pc = 0x31A144u;
    SET_GPR_U32(ctx, 31, 0x31A14Cu);
    ctx->pc = 0x31A148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A144u;
    // 0x31a148: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x319258u, 0x31A144u, 0x31A14Cu)) {
        return;
    }
    ctx->pc = 0x31A14Cu;
label_31a14c:
    // 0x31a14c: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x31a14cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x31a150: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x31a150u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x31a154: 0x5040ffd6  beql        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x31A154u;
    {
        const bool branch_taken_0x31a154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a154) {
            ctx->pc = 0x31A158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A154u;
            // 0x31a158: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A0B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31a0b0;
        }
    }
    ctx->pc = 0x31A15Cu;
label_31a15c:
    // 0x31a15c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x31a15cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31a160: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x31a160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x31a164: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x31A164u;
    {
        const bool branch_taken_0x31a164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a164) {
            ctx->pc = 0x31A168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A164u;
            // 0x31a168: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A1C8u;
            goto label_31a1c8;
        }
    }
    ctx->pc = 0x31A16Cu;
    // 0x31a16c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x31a16cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31a170: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x31a170u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x31a174: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31A174u;
    {
        const bool branch_taken_0x31a174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A174u;
        // 0x31a178: 0x26c51b00  addiu       $a1, $s6, 0x1B00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 6912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a174) {
            ctx->pc = 0x31A1A4u;
            goto label_31a1a4;
        }
    }
    ctx->pc = 0x31A17Cu;
    // 0x31a17c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31a17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31a180: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x31A180u;
    SET_GPR_U32(ctx, 31, 0x31A188u);
    ctx->pc = 0x31A184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A180u;
    // 0x31a184: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x31A180u, 0x31A188u)) {
        return;
    }
    ctx->pc = 0x31A188u;
label_31a188:
    // 0x31a188: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31a188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31a18c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x31a18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31a190: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x31a190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x31a194: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x31a194u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x31a198: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x31a198u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x31a19c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x31A19Cu;
    {
        const bool branch_taken_0x31a19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A19Cu;
        // 0x31a1a0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a19c) {
            ctx->pc = 0x31A1ECu;
            goto label_31a1ec;
        }
    }
    ctx->pc = 0x31A1A4u;
label_31a1a4:
    // 0x31a1a4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31a1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31a1a8: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x31A1A8u;
    SET_GPR_U32(ctx, 31, 0x31A1B0u);
    ctx->pc = 0x31A1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A1A8u;
    // 0x31a1ac: 0x26c51b00  addiu       $a1, $s6, 0x1B00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 6912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x31A1A8u, 0x31A1B0u)) {
        return;
    }
    ctx->pc = 0x31A1B0u;
label_31a1b0:
    // 0x31a1b0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31a1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31a1b4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x31a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31a1b8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x31a1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x31a1bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31a1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31a1c0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x31A1C0u;
    {
        const bool branch_taken_0x31a1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A1C0u;
        // 0x31a1c4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a1c0) {
            ctx->pc = 0x31A1ECu;
            goto label_31a1ec;
        }
    }
    ctx->pc = 0x31A1C8u;
label_31a1c8:
    // 0x31a1c8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31A1C8u;
    {
        const bool branch_taken_0x31a1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31a1c8) {
            ctx->pc = 0x31A1CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A1C8u;
            // 0x31a1cc: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A1DCu;
            goto label_31a1dc;
        }
    }
    ctx->pc = 0x31A1D0u;
    // 0x31a1d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31a1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a1d4: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x31a1d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x31a1d8: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x31a1d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_31a1dc:
    // 0x31a1dc: 0x26c51b00  addiu       $a1, $s6, 0x1B00
    ctx->pc = 0x31a1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 6912));
    // 0x31a1e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x31a1e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a1e4: 0xc0c6496  jal         func_319258
    ctx->pc = 0x31A1E4u;
    SET_GPR_U32(ctx, 31, 0x31A1ECu);
    ctx->pc = 0x31A1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A1E4u;
    // 0x31a1e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x319258u, 0x31A1E4u, 0x31A1ECu)) {
        return;
    }
    ctx->pc = 0x31A1ECu;
label_31a1ec:
    // 0x31a1ec: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x31a1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31a1f0: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x31a1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31a1f4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x31a1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31a1f8: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x31a1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x31a1fc: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x31a1fcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x31a200: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x31a200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x31a204: 0x1000fc6a  b           . + 4 + (-0x396 << 2)
    ctx->pc = 0x31A204u;
    {
        const bool branch_taken_0x31a204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A204u;
        // 0x31a208: 0xafa5004c  sw          $a1, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a204) {
            ctx->pc = 0x3193B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3193b0;
        }
    }
    ctx->pc = 0x31A20Cu;
label_31a20c:
    // 0x31a20c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x31a20cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_31a210:
    // 0x31a210: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x31a210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x31a214: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31A214u;
    {
        const bool branch_taken_0x31a214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A214u;
        // 0x31a218: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a214) {
            ctx->pc = 0x31A234u;
            goto label_31a234;
        }
    }
    ctx->pc = 0x31A21Cu;
    // 0x31a21c: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x31a21cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x31a220: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31a220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a224: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31a224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a228: 0xc0c6496  jal         func_319258
    ctx->pc = 0x31A228u;
    SET_GPR_U32(ctx, 31, 0x31A230u);
    ctx->pc = 0x31A22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A228u;
    // 0x31a22c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x319258u, 0x31A228u, 0x31A230u)) {
        return;
    }
    ctx->pc = 0x31A230u;
label_31a230:
    // 0x31a230: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x31a230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_31a234:
    // 0x31a234: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x31a234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x31a238: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x31a238u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x31a23c: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x31a23cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x31a240: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x31a240u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x31a244: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x31a244u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x31a248: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x31a248u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x31a24c: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x31a24cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x31a250: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x31a250u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31a254: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x31a254u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31a258: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x31a258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31a25c: 0x3e00008  jr          $ra
    ctx->pc = 0x31A25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A25Cu;
        // 0x31a260: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A25Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A264u;
    // 0x31a264: 0x0  nop
    ctx->pc = 0x31a264u;
    // NOP
    ctx->pc = 0x31a268u;
}
