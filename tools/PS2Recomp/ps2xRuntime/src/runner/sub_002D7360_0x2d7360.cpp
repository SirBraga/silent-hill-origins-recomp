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

// Function: sub_002D7360
// Address: 0x2d7360 - 0x2d7918
void sub_002D7360_0x2d7360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7360_0x2d7360");
#endif

    switch (ctx->pc) {
        case 0x2d73d0u: goto label_2d73d0;
        case 0x2d73e8u: goto label_2d73e8;
        case 0x2d7470u: goto label_2d7470;
        case 0x2d74a4u: goto label_2d74a4;
        case 0x2d74dcu: goto label_2d74dc;
        case 0x2d74f8u: goto label_2d74f8;
        case 0x2d7524u: goto label_2d7524;
        case 0x2d754cu: goto label_2d754c;
        case 0x2d7578u: goto label_2d7578;
        case 0x2d75a4u: goto label_2d75a4;
        case 0x2d7644u: goto label_2d7644;
        case 0x2d7688u: goto label_2d7688;
        case 0x2d76d4u: goto label_2d76d4;
        case 0x2d76f0u: goto label_2d76f0;
        case 0x2d7734u: goto label_2d7734;
        case 0x2d777cu: goto label_2d777c;
        case 0x2d77c0u: goto label_2d77c0;
        case 0x2d7808u: goto label_2d7808;
        case 0x2d7860u: goto label_2d7860;
        case 0x2d7884u: goto label_2d7884;
        case 0x2d78c8u: goto label_2d78c8;
        default: break;
    }

    ctx->pc = 0x2d7360u;

    // 0x2d7360: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2d7360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2d7364: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x2d7364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x2d7368: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x2d7368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x2d736c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d736cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7370: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x2d7370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x2d7374: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x2d7374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x2d7378: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x2d7378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x2d737c: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x2d737cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x2d7380: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x2d7380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x2d7384: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x2d7384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x2d7388: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2d7388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2d738c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2d738cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2d7390: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x2d7390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x2d7394: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2d7394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d7398: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2d7398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d739c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2d739cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2d73a0: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x2d73a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2d73a4: 0x10600150  beqz        $v1, . + 4 + (0x150 << 2)
    ctx->pc = 0x2D73A4u;
    {
        const bool branch_taken_0x2d73a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D73A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D73A4u;
        // 0x2d73a8: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d73a4) {
            ctx->pc = 0x2D78E8u;
            goto label_2d78e8;
        }
    }
    ctx->pc = 0x2D73ACu;
    // 0x2d73ac: 0xafb30068  sw          $s3, 0x68($sp)
    ctx->pc = 0x2d73acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
    // 0x2d73b0: 0x8e7e0004  lw          $fp, 0x4($s3)
    ctx->pc = 0x2d73b0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d73b4: 0x8e770024  lw          $s7, 0x24($s3)
    ctx->pc = 0x2d73b4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x2d73b8: 0x97c20008  lhu         $v0, 0x8($fp)
    ctx->pc = 0x2d73b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2d73bc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d73bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d73c0: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x2d73c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x2d73c4: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2d73c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2d73c8: 0xc0ab586  jal         func_2AD618
    ctx->pc = 0x2D73C8u;
    SET_GPR_U32(ctx, 31, 0x2D73D0u);
    ctx->pc = 0x2D73CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D73C8u;
    // 0x2d73cc: 0xafa30064  sw          $v1, 0x64($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD618u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD618u, 0x2D73C8u, 0x2D73D0u)) {
        return;
    }
    ctx->pc = 0x2D73D0u;
label_2d73d0:
    // 0x2d73d0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2d73d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d73d4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2d73d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2d73d8: 0x14400143  bnez        $v0, . + 4 + (0x143 << 2)
    ctx->pc = 0x2D73D8u;
    {
        const bool branch_taken_0x2d73d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D73DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D73D8u;
        // 0x2d73dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d73d8) {
            ctx->pc = 0x2D78E8u;
            goto label_2d78e8;
        }
    }
    ctx->pc = 0x2D73E0u;
    // 0x2d73e0: 0xc0ab588  jal         func_2AD620
    ctx->pc = 0x2D73E0u;
    SET_GPR_U32(ctx, 31, 0x2D73E8u);
    ctx->pc = 0x2D73E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D73E0u;
    // 0x2d73e4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD620u, 0x2D73E0u, 0x2D73E8u)) {
        return;
    }
    ctx->pc = 0x2D73E8u;
label_2d73e8:
    // 0x2d73e8: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x2d73e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x2d73ec: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2d73ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2d73f0: 0x1440013d  bnez        $v0, . + 4 + (0x13D << 2)
    ctx->pc = 0x2D73F0u;
    {
        const bool branch_taken_0x2d73f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D73F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D73F0u;
        // 0x2d73f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d73f0) {
            ctx->pc = 0x2D78E8u;
            goto label_2d78e8;
        }
    }
    ctx->pc = 0x2D73F8u;
    // 0x2d73f8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d73f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d73fc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2d73fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7400: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d7400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d7404: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2d7404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2d7408: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d7408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d740c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x2d740cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x2d7410: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2d7410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d7414: 0x10600069  beqz        $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x2D7414u;
    {
        const bool branch_taken_0x2d7414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7414u;
        // 0x2d7418: 0xaf808b30  sw          $zero, -0x74D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7414) {
            ctx->pc = 0x2D75BCu;
            goto label_2d75bc;
        }
    }
    ctx->pc = 0x2D741Cu;
    // 0x2d741c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2d741cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d7420: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2d7420u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7424: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2d7424u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7428: 0x18800023  blez        $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D7428u;
    {
        const bool branch_taken_0x2d7428 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x2D742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7428u;
        // 0x2d742c: 0x30630003  andi        $v1, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7428) {
            ctx->pc = 0x2D74B8u;
            goto label_2d74b8;
        }
    }
    ctx->pc = 0x2D7430u;
    // 0x2d7430: 0x50600032  beql        $v1, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x2D7430u;
    {
        const bool branch_taken_0x2d7430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7430) {
            ctx->pc = 0x2D7434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7430u;
            // 0x2d7434: 0x8e620010  lw          $v0, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D74FCu;
            goto label_2d74fc;
        }
    }
    ctx->pc = 0x2D7438u;
    // 0x2d7438: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2d7438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d743c: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x2D743Cu;
    {
        const bool branch_taken_0x2d743c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d743c) {
            ctx->pc = 0x2D7440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D743Cu;
            // 0x2d7440: 0x8e620010  lw          $v0, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D74BCu;
            goto label_2d74bc;
        }
    }
    ctx->pc = 0x2D7444u;
    // 0x2d7444: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2d7444u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2d7448: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D7448u;
    {
        const bool branch_taken_0x2d7448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7448u;
        // 0x2d744c: 0x8fa50068  lw          $a1, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7448) {
            ctx->pc = 0x2D7480u;
            goto label_2d7480;
        }
    }
    ctx->pc = 0x2D7450u;
    // 0x2d7450: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d7450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7454: 0x2415000c  addiu       $s5, $zero, 0xC
    ctx->pc = 0x2d7454u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2d7458: 0x2416004c  addiu       $s6, $zero, 0x4C
    ctx->pc = 0x2d7458u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2d745c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x2d745cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2d7460: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2d7460u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7464: 0x8fc50014  lw          $a1, 0x14($fp)
    ctx->pc = 0x2d7464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2d7468: 0xc0ab80c  jal         func_2AE030
    ctx->pc = 0x2D7468u;
    SET_GPR_U32(ctx, 31, 0x2D7470u);
    ctx->pc = 0x2D746Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7468u;
    // 0x2d746c: 0x8c460008  lw          $a2, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AE030u, 0x2D7468u, 0x2D7470u)) {
        return;
    }
    ctx->pc = 0x2D7470u;
label_2d7470:
    // 0x2d7470: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2d7470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d7474: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2d7474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d7478: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2d7478u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2d747c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x2d747cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2d7480:
    // 0x2d7480: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d7480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7484: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2d7484u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2d7488: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x2d7488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2d748c: 0x8fc50014  lw          $a1, 0x14($fp)
    ctx->pc = 0x2d748cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2d7490: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2d7490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2d7494: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x2d7494u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d7498: 0xb62821  addu        $a1, $a1, $s6
    ctx->pc = 0x2d7498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x2d749c: 0xc0ab80c  jal         func_2AE030
    ctx->pc = 0x2D749Cu;
    SET_GPR_U32(ctx, 31, 0x2D74A4u);
    ctx->pc = 0x2D74A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D749Cu;
    // 0x2d74a0: 0x26d6004c  addiu       $s6, $s6, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AE030u, 0x2D749Cu, 0x2D74A4u)) {
        return;
    }
    ctx->pc = 0x2D74A4u;
label_2d74a4:
    // 0x2d74a4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2d74a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d74a8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2d74a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d74ac: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x2d74acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2d74b0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2d74b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2d74b4: 0x26b5000c  addiu       $s5, $s5, 0xC
    ctx->pc = 0x2d74b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
label_2d74b8:
    // 0x2d74b8: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2d74b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2d74bc:
    // 0x2d74bc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d74bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d74c0: 0x8fc50014  lw          $a1, 0x14($fp)
    ctx->pc = 0x2d74c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2d74c4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2d74c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2d74c8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2d74c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2d74cc: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x2d74ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d74d0: 0xb62821  addu        $a1, $a1, $s6
    ctx->pc = 0x2d74d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x2d74d4: 0xc0ab80c  jal         func_2AE030
    ctx->pc = 0x2D74D4u;
    SET_GPR_U32(ctx, 31, 0x2D74DCu);
    ctx->pc = 0x2D74D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D74D4u;
    // 0x2d74d8: 0x26d6004c  addiu       $s6, $s6, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AE030u, 0x2D74D4u, 0x2D74DCu)) {
        return;
    }
    ctx->pc = 0x2D74DCu;
label_2d74dc:
    // 0x2d74dc: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x2d74dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2d74e0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2d74e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d74e4: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x2d74e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2d74e8: 0x285202b  sltu        $a0, $s4, $a1
    ctx->pc = 0x2d74e8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2d74ec: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2d74ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2d74f0: 0x10800032  beqz        $a0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2D74F0u;
    {
        const bool branch_taken_0x2d74f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D74F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D74F0u;
        // 0x2d74f4: 0x26b5000c  addiu       $s5, $s5, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d74f0) {
            ctx->pc = 0x2D75BCu;
            goto label_2d75bc;
        }
    }
    ctx->pc = 0x2D74F8u;
label_2d74f8:
    // 0x2d74f8: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2d74f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2d74fc:
    // 0x2d74fc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d74fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7500: 0x8fc50014  lw          $a1, 0x14($fp)
    ctx->pc = 0x2d7500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2d7504: 0x26b0000c  addiu       $s0, $s5, 0xC
    ctx->pc = 0x2d7504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x2d7508: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2d7508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2d750c: 0x26b10018  addiu       $s1, $s5, 0x18
    ctx->pc = 0x2d750cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
    // 0x2d7510: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x2d7510u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d7514: 0xb62821  addu        $a1, $a1, $s6
    ctx->pc = 0x2d7514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x2d7518: 0x26b20024  addiu       $s2, $s5, 0x24
    ctx->pc = 0x2d7518u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 36));
    // 0x2d751c: 0xc0ab80c  jal         func_2AE030
    ctx->pc = 0x2D751Cu;
    SET_GPR_U32(ctx, 31, 0x2D7524u);
    ctx->pc = 0x2D7520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D751Cu;
    // 0x2d7520: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AE030u, 0x2D751Cu, 0x2D7524u)) {
        return;
    }
    ctx->pc = 0x2D7524u;
label_2d7524:
    // 0x2d7524: 0x8e670010  lw          $a3, 0x10($s3)
    ctx->pc = 0x2d7524u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2d7528: 0x26c8004c  addiu       $t0, $s6, 0x4C
    ctx->pc = 0x2d7528u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 76));
    // 0x2d752c: 0x8fc50014  lw          $a1, 0x14($fp)
    ctx->pc = 0x2d752cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2d7530: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d7530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7534: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x2d7534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x2d7538: 0x2a73821  addu        $a3, $s5, $a3
    ctx->pc = 0x2d7538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    // 0x2d753c: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x2d753cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2d7540: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x2d7540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x2d7544: 0xc0ab80c  jal         func_2AE030
    ctx->pc = 0x2D7544u;
    SET_GPR_U32(ctx, 31, 0x2D754Cu);
    ctx->pc = 0x2D7548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7544u;
    // 0x2d7548: 0xace20004  sw          $v0, 0x4($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AE030u, 0x2D7544u, 0x2D754Cu)) {
        return;
    }
    ctx->pc = 0x2D754Cu;
label_2d754c:
    // 0x2d754c: 0x26b50030  addiu       $s5, $s5, 0x30
    ctx->pc = 0x2d754cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x2d7550: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x2d7550u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2d7554: 0x26c70098  addiu       $a3, $s6, 0x98
    ctx->pc = 0x2d7554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 152));
    // 0x2d7558: 0x8fc50014  lw          $a1, 0x14($fp)
    ctx->pc = 0x2d7558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2d755c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d755cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7560: 0x2261821  addu        $v1, $s1, $a2
    ctx->pc = 0x2d7560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2d7564: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x2d7564u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x2d7568: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x2d7568u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2d756c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x2d756cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2d7570: 0xc0ab80c  jal         func_2AE030
    ctx->pc = 0x2D7570u;
    SET_GPR_U32(ctx, 31, 0x2D7578u);
    ctx->pc = 0x2D7574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7570u;
    // 0x2d7574: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AE030u, 0x2D7570u, 0x2D7578u)) {
        return;
    }
    ctx->pc = 0x2D7578u;
label_2d7578:
    // 0x2d7578: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x2d7578u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2d757c: 0x26c700e4  addiu       $a3, $s6, 0xE4
    ctx->pc = 0x2d757cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 228));
    // 0x2d7580: 0x8fc50014  lw          $a1, 0x14($fp)
    ctx->pc = 0x2d7580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2d7584: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d7584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7588: 0x2461821  addu        $v1, $s2, $a2
    ctx->pc = 0x2d7588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x2d758c: 0x2268821  addu        $s1, $s1, $a2
    ctx->pc = 0x2d758cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2d7590: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x2d7590u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2d7594: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x2d7594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2d7598: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2d7598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2d759c: 0xc0ab80c  jal         func_2AE030
    ctx->pc = 0x2D759Cu;
    SET_GPR_U32(ctx, 31, 0x2D75A4u);
    ctx->pc = 0x2D75A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D759Cu;
    // 0x2d75a0: 0x26d60130  addiu       $s6, $s6, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AE030u, 0x2D759Cu, 0x2D75A4u)) {
        return;
    }
    ctx->pc = 0x2D75A4u;
label_2d75a4:
    // 0x2d75a4: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x2d75a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2d75a8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2d75a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d75ac: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x2d75acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2d75b0: 0x285202b  sltu        $a0, $s4, $a1
    ctx->pc = 0x2d75b0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2d75b4: 0x1480ffd0  bnez        $a0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x2D75B4u;
    {
        const bool branch_taken_0x2d75b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D75B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D75B4u;
        // 0x2d75b8: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d75b4) {
            ctx->pc = 0x2D74F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d74f8;
        }
    }
    ctx->pc = 0x2D75BCu;
label_2d75bc:
    // 0x2d75bc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2d75bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d75c0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2d75c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d75c4: 0xa662000c  sh          $v0, 0xC($s3)
    ctx->pc = 0x2d75c4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d75c8: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x2d75c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    // 0x2d75cc: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x2d75ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x2d75d0: 0x10600093  beqz        $v1, . + 4 + (0x93 << 2)
    ctx->pc = 0x2D75D0u;
    {
        const bool branch_taken_0x2d75d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D75D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D75D0u;
        // 0x2d75d4: 0xafb30010  sw          $s3, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d75d0) {
            ctx->pc = 0x2D7820u;
            goto label_2d7820;
        }
    }
    ctx->pc = 0x2D75D8u;
    // 0x2d75d8: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x2d75d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x2d75dc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2d75dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d75e0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2d75e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d75e4: 0x1880002c  blez        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2D75E4u;
    {
        const bool branch_taken_0x2d75e4 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x2D75E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D75E4u;
        // 0x2d75e8: 0x30630003  andi        $v1, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d75e4) {
            ctx->pc = 0x2D7698u;
            goto label_2d7698;
        }
    }
    ctx->pc = 0x2D75ECu;
    // 0x2d75ec: 0x50600041  beql        $v1, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x2D75ECu;
    {
        const bool branch_taken_0x2d75ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d75ec) {
            ctx->pc = 0x2D75F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D75ECu;
            // 0x2d75f0: 0x8fc3001c  lw          $v1, 0x1C($fp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D76F4u;
            goto label_2d76f4;
        }
    }
    ctx->pc = 0x2D75F4u;
    // 0x2d75f4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2d75f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d75f8: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x2D75F8u;
    {
        const bool branch_taken_0x2d75f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d75f8) {
            ctx->pc = 0x2D75FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D75F8u;
            // 0x2d75fc: 0x8fc3001c  lw          $v1, 0x1C($fp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D769Cu;
            goto label_2d769c;
        }
    }
    ctx->pc = 0x2D7600u;
    // 0x2d7600: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2d7600u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2d7604: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D7604u;
    {
        const bool branch_taken_0x2d7604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7604) {
            ctx->pc = 0x2D7608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7604u;
            // 0x2d7608: 0x8fc3001c  lw          $v1, 0x1C($fp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7650u;
            goto label_2d7650;
        }
    }
    ctx->pc = 0x2D760Cu;
    // 0x2d760c: 0x8fc8001c  lw          $t0, 0x1C($fp)
    ctx->pc = 0x2d760cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x2d7610: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d7610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7614: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2d7614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d7618: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d7618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d761c: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x2d761cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2d7620: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x2d7620u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d7624: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x2d7624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d7628: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x2d7628u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d762c: 0xa7a30004  sh          $v1, 0x4($sp)
    ctx->pc = 0x2d762cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d7630: 0x241600b4  addiu       $s6, $zero, 0xB4
    ctx->pc = 0x2d7630u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x2d7634: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2d7634u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7638: 0x95020002  lhu         $v0, 0x2($t0)
    ctx->pc = 0x2d7638u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x2d763c: 0xc0c25b2  jal         func_3096C8
    ctx->pc = 0x2D763Cu;
    SET_GPR_U32(ctx, 31, 0x2D7644u);
    ctx->pc = 0x2D7640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D763Cu;
    // 0x2d7640: 0xa7a20014  sh          $v0, 0x14($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 20), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3096C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3096C8u, 0x2D763Cu, 0x2D7644u)) {
        return;
    }
    ctx->pc = 0x2D7644u;
label_2d7644:
    // 0x2d7644: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x2d7644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2d7648: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2d7648u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2d764c: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x2d764cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
label_2d7650:
    // 0x2d7650: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d7650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7654: 0x8e680004  lw          $t0, 0x4($s3)
    ctx->pc = 0x2d7654u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d7658: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d7658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d765c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x2d765cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2d7660: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x2d7660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d7664: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2d7664u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d7668: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2d7668u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2d766c: 0x8d050018  lw          $a1, 0x18($t0)
    ctx->pc = 0x2d766cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x2d7670: 0xa7a20004  sh          $v0, 0x4($sp)
    ctx->pc = 0x2d7670u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d7674: 0xb62821  addu        $a1, $a1, $s6
    ctx->pc = 0x2d7674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x2d7678: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x2d7678u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d767c: 0x26d600b4  addiu       $s6, $s6, 0xB4
    ctx->pc = 0x2d767cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 180));
    // 0x2d7680: 0xc0c25b2  jal         func_3096C8
    ctx->pc = 0x2D7680u;
    SET_GPR_U32(ctx, 31, 0x2D7688u);
    ctx->pc = 0x2D7684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7680u;
    // 0x2d7684: 0xa7a20014  sh          $v0, 0x14($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 20), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3096C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3096C8u, 0x2D7680u, 0x2D7688u)) {
        return;
    }
    ctx->pc = 0x2D7688u;
label_2d7688:
    // 0x2d7688: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x2d7688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2d768c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x2d768cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2d7690: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2d7690u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2d7694: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x2d7694u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_2d7698:
    // 0x2d7698: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x2d7698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
label_2d769c:
    // 0x2d769c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d769cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d76a0: 0x8e680004  lw          $t0, 0x4($s3)
    ctx->pc = 0x2d76a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d76a4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d76a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d76a8: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x2d76a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2d76ac: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x2d76acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d76b0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2d76b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d76b4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2d76b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2d76b8: 0x8d050018  lw          $a1, 0x18($t0)
    ctx->pc = 0x2d76b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x2d76bc: 0xa7a20004  sh          $v0, 0x4($sp)
    ctx->pc = 0x2d76bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d76c0: 0xb62821  addu        $a1, $a1, $s6
    ctx->pc = 0x2d76c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x2d76c4: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x2d76c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d76c8: 0x26d600b4  addiu       $s6, $s6, 0xB4
    ctx->pc = 0x2d76c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 180));
    // 0x2d76cc: 0xc0c25b2  jal         func_3096C8
    ctx->pc = 0x2D76CCu;
    SET_GPR_U32(ctx, 31, 0x2D76D4u);
    ctx->pc = 0x2D76D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D76CCu;
    // 0x2d76d0: 0xa7a20014  sh          $v0, 0x14($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 20), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3096C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3096C8u, 0x2D76CCu, 0x2D76D4u)) {
        return;
    }
    ctx->pc = 0x2D76D4u;
label_2d76d4:
    // 0x2d76d4: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x2d76d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2d76d8: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x2d76d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x2d76dc: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x2d76dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2d76e0: 0x285202b  sltu        $a0, $s4, $a1
    ctx->pc = 0x2d76e0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2d76e4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2d76e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2d76e8: 0x1080004d  beqz        $a0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2D76E8u;
    {
        const bool branch_taken_0x2d76e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D76ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D76E8u;
        // 0x2d76ec: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d76e8) {
            ctx->pc = 0x2D7820u;
            goto label_2d7820;
        }
    }
    ctx->pc = 0x2D76F0u;
label_2d76f0:
    // 0x2d76f0: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x2d76f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
label_2d76f4:
    // 0x2d76f4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d76f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d76f8: 0x8e680004  lw          $t0, 0x4($s3)
    ctx->pc = 0x2d76f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d76fc: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x2d76fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d7700: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x2d7700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2d7704: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d7704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7708: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2d7708u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d770c: 0x26b00004  addiu       $s0, $s5, 0x4
    ctx->pc = 0x2d770cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x2d7710: 0x8d050018  lw          $a1, 0x18($t0)
    ctx->pc = 0x2d7710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x2d7714: 0x26b10008  addiu       $s1, $s5, 0x8
    ctx->pc = 0x2d7714u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x2d7718: 0xa7a20004  sh          $v0, 0x4($sp)
    ctx->pc = 0x2d7718u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d771c: 0x26b2000c  addiu       $s2, $s5, 0xC
    ctx->pc = 0x2d771cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x2d7720: 0xb62821  addu        $a1, $a1, $s6
    ctx->pc = 0x2d7720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x2d7724: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x2d7724u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x2d7728: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x2d7728u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d772c: 0xc0c25b2  jal         func_3096C8
    ctx->pc = 0x2D772Cu;
    SET_GPR_U32(ctx, 31, 0x2D7734u);
    ctx->pc = 0x2D7730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D772Cu;
    // 0x2d7730: 0xa7a20014  sh          $v0, 0x14($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 20), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3096C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3096C8u, 0x2D772Cu, 0x2D7734u)) {
        return;
    }
    ctx->pc = 0x2D7734u;
label_2d7734:
    // 0x2d7734: 0x8fc8001c  lw          $t0, 0x1C($fp)
    ctx->pc = 0x2d7734u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x2d7738: 0x26ca00b4  addiu       $t2, $s6, 0xB4
    ctx->pc = 0x2d7738u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), 180));
    // 0x2d773c: 0x8e690004  lw          $t1, 0x4($s3)
    ctx->pc = 0x2d773cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d7740: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d7740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7744: 0x2084021  addu        $t0, $s0, $t0
    ctx->pc = 0x2d7744u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x2d7748: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x2d7748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2d774c: 0x95040000  lhu         $a0, 0x0($t0)
    ctx->pc = 0x2d774cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2d7750: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x2d7750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d7754: 0x8d250018  lw          $a1, 0x18($t1)
    ctx->pc = 0x2d7754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x2d7758: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x2d7758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2d775c: 0xa7a40004  sh          $a0, 0x4($sp)
    ctx->pc = 0x2d775cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x2d7760: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x2d7760u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x2d7764: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2d7764u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2d7768: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x2d7768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x2d776c: 0x95020002  lhu         $v0, 0x2($t0)
    ctx->pc = 0x2d776cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x2d7770: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d7770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7774: 0xc0c25b2  jal         func_3096C8
    ctx->pc = 0x2D7774u;
    SET_GPR_U32(ctx, 31, 0x2D777Cu);
    ctx->pc = 0x2D7778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7774u;
    // 0x2d7778: 0xa7a20014  sh          $v0, 0x14($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 20), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3096C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3096C8u, 0x2D7774u, 0x2D777Cu)) {
        return;
    }
    ctx->pc = 0x2D777Cu;
label_2d777c:
    // 0x2d777c: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x2d777cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x2d7780: 0x26ca0168  addiu       $t2, $s6, 0x168
    ctx->pc = 0x2d7780u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), 360));
    // 0x2d7784: 0x8e690004  lw          $t1, 0x4($s3)
    ctx->pc = 0x2d7784u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d7788: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x2d7788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d778c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2d778cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2d7790: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x2d7790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2d7794: 0x94680000  lhu         $t0, 0x0($v1)
    ctx->pc = 0x2d7794u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d7798: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d7798u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d779c: 0x8d250018  lw          $a1, 0x18($t1)
    ctx->pc = 0x2d779cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x2d77a0: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x2d77a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2d77a4: 0xa7a80004  sh          $t0, 0x4($sp)
    ctx->pc = 0x2d77a4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 8));
    // 0x2d77a8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d77a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d77ac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d77acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2d77b0: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x2d77b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x2d77b4: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x2d77b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d77b8: 0xc0c25b2  jal         func_3096C8
    ctx->pc = 0x2D77B8u;
    SET_GPR_U32(ctx, 31, 0x2D77C0u);
    ctx->pc = 0x2D77BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D77B8u;
    // 0x2d77bc: 0xa7a20014  sh          $v0, 0x14($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 20), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3096C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3096C8u, 0x2D77B8u, 0x2D77C0u)) {
        return;
    }
    ctx->pc = 0x2D77C0u;
label_2d77c0:
    // 0x2d77c0: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x2d77c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x2d77c4: 0x26ca021c  addiu       $t2, $s6, 0x21C
    ctx->pc = 0x2d77c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), 540));
    // 0x2d77c8: 0x8e690004  lw          $t1, 0x4($s3)
    ctx->pc = 0x2d77c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d77cc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d77ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d77d0: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2d77d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2d77d4: 0x8e670018  lw          $a3, 0x18($s3)
    ctx->pc = 0x2d77d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2d77d8: 0x94680000  lhu         $t0, 0x0($v1)
    ctx->pc = 0x2d77d8u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d77dc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d77dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d77e0: 0x8d250018  lw          $a1, 0x18($t1)
    ctx->pc = 0x2d77e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x2d77e4: 0x2278821  addu        $s1, $s1, $a3
    ctx->pc = 0x2d77e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x2d77e8: 0xa7a80004  sh          $t0, 0x4($sp)
    ctx->pc = 0x2d77e8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 8));
    // 0x2d77ec: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x2d77ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d77f0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2d77f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2d77f4: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x2d77f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x2d77f8: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x2d77f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d77fc: 0x26d602d0  addiu       $s6, $s6, 0x2D0
    ctx->pc = 0x2d77fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x2d7800: 0xc0c25b2  jal         func_3096C8
    ctx->pc = 0x2D7800u;
    SET_GPR_U32(ctx, 31, 0x2D7808u);
    ctx->pc = 0x2D7804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7800u;
    // 0x2d7804: 0xa7a20014  sh          $v0, 0x14($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 20), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3096C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3096C8u, 0x2D7800u, 0x2D7808u)) {
        return;
    }
    ctx->pc = 0x2D7808u;
label_2d7808:
    // 0x2d7808: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x2d7808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2d780c: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x2d780cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x2d7810: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x2d7810u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2d7814: 0x285202b  sltu        $a0, $s4, $a1
    ctx->pc = 0x2d7814u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2d7818: 0x1480ffb5  bnez        $a0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x2D7818u;
    {
        const bool branch_taken_0x2d7818 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7818u;
        // 0x2d781c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7818) {
            ctx->pc = 0x2D76F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d76f0;
        }
    }
    ctx->pc = 0x2D7820u;
label_2d7820:
    // 0x2d7820: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2d7820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2d7824: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2d7824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2d7828: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x2d7828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x2d782c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d782cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d7830: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2D7830u;
    {
        const bool branch_taken_0x2d7830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7830u;
        // 0x2d7834: 0xa6640014  sh          $a0, 0x14($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 20), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7830) {
            ctx->pc = 0x2D78E4u;
            goto label_2d78e4;
        }
    }
    ctx->pc = 0x2D7838u;
    // 0x2d7838: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2d7838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d783c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2d783cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2d7840: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2D7840u;
    {
        const bool branch_taken_0x2d7840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7840u;
        // 0x2d7844: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7840) {
            ctx->pc = 0x2D78E4u;
            goto label_2d78e4;
        }
    }
    ctx->pc = 0x2D7848u;
    // 0x2d7848: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x2d7848u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x2d784c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x2d784cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d7850: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x2d7850u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x2d7854: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d7854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7858: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2d7858u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d785c: 0x0  nop
    ctx->pc = 0x2d785cu;
    // NOP
label_2d7860:
    // 0x2d7860: 0x8fc2002c  lw          $v0, 0x2C($fp)
    ctx->pc = 0x2d7860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 44)));
    // 0x2d7864: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2d7864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2d7868: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2d7868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d786c: 0x10b20016  beq         $a1, $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D786Cu;
    {
        const bool branch_taken_0x2d786c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 18));
        ctx->pc = 0x2D7870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D786Cu;
        // 0x2d7870: 0x52980  sll         $a1, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d786c) {
            ctx->pc = 0x2D78C8u;
            goto label_2d78c8;
        }
    }
    ctx->pc = 0x2D7874u;
    // 0x2d7874: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x2d7874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x2d7878: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d7878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d787c: 0xc092e7c  jal         func_24B9F0
    ctx->pc = 0x2D787Cu;
    SET_GPR_U32(ctx, 31, 0x2D7884u);
    ctx->pc = 0x2D7880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D787Cu;
    // 0x2d7880: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B9F0u, 0x2D787Cu, 0x2D7884u)) {
        return;
    }
    ctx->pc = 0x2D7884u;
label_2d7884:
    // 0x2d7884: 0x8e67003c  lw          $a3, 0x3C($s3)
    ctx->pc = 0x2d7884u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x2d7888: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d7888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d788c: 0x8e640038  lw          $a0, 0x38($s3)
    ctx->pc = 0x2d788cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x2d7890: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2d7890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d7894: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x2d7894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x2d7898: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x2d7898u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2d789c: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x2d789cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2d78a0: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2d78a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2d78a4: 0x78e20010  lq          $v0, 0x10($a3)
    ctx->pc = 0x2d78a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2d78a8: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x2d78a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x2d78ac: 0x78e30020  lq          $v1, 0x20($a3)
    ctx->pc = 0x2d78acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2d78b0: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x2d78b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x2d78b4: 0x78e20030  lq          $v0, 0x30($a3)
    ctx->pc = 0x2d78b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x2d78b8: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x2d78b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x2d78bc: 0x8e640038  lw          $a0, 0x38($s3)
    ctx->pc = 0x2d78bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x2d78c0: 0xc092fa4  jal         func_24BE90
    ctx->pc = 0x2D78C0u;
    SET_GPR_U32(ctx, 31, 0x2D78C8u);
    ctx->pc = 0x2D78C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D78C0u;
    // 0x2d78c4: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BE90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BE90u, 0x2D78C0u, 0x2D78C8u)) {
        return;
    }
    ctx->pc = 0x2D78C8u;
label_2d78c8:
    // 0x2d78c8: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2d78c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d78cc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2d78ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2d78d0: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x2d78d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2d78d4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2d78d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2d78d8: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2d78d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d78dc: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2D78DCu;
    {
        const bool branch_taken_0x2d78dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D78E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D78DCu;
        // 0x2d78e0: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d78dc) {
            ctx->pc = 0x2D7860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7860;
        }
    }
    ctx->pc = 0x2D78E4u;
label_2d78e4:
    // 0x2d78e4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d78e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2d78e8:
    // 0x2d78e8: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x2d78e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2d78ec: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x2d78ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d78f0: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x2d78f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d78f4: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x2d78f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d78f8: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x2d78f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d78fc: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x2d78fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d7900: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x2d7900u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d7904: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x2d7904u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d7908: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2d7908u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d790c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2d790cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d7910: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7910u;
        // 0x2d7914: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7918u;
}
