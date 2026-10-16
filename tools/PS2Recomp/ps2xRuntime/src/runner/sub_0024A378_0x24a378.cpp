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

// Function: sub_0024A378
// Address: 0x24a378 - 0x24a498
void sub_0024A378_0x24a378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A378_0x24a378");
#endif

    switch (ctx->pc) {
        case 0x24a378u: goto label_24a378;
        case 0x24a37cu: goto label_24a37c;
        case 0x24a380u: goto label_24a380;
        case 0x24a384u: goto label_24a384;
        case 0x24a388u: goto label_24a388;
        case 0x24a38cu: goto label_24a38c;
        case 0x24a390u: goto label_24a390;
        case 0x24a394u: goto label_24a394;
        case 0x24a398u: goto label_24a398;
        case 0x24a39cu: goto label_24a39c;
        case 0x24a3a0u: goto label_24a3a0;
        case 0x24a3a4u: goto label_24a3a4;
        case 0x24a3a8u: goto label_24a3a8;
        case 0x24a3acu: goto label_24a3ac;
        case 0x24a3b0u: goto label_24a3b0;
        case 0x24a3b4u: goto label_24a3b4;
        case 0x24a3b8u: goto label_24a3b8;
        case 0x24a3bcu: goto label_24a3bc;
        case 0x24a3c0u: goto label_24a3c0;
        case 0x24a3c4u: goto label_24a3c4;
        case 0x24a3c8u: goto label_24a3c8;
        case 0x24a3ccu: goto label_24a3cc;
        case 0x24a3d0u: goto label_24a3d0;
        case 0x24a3d4u: goto label_24a3d4;
        case 0x24a3d8u: goto label_24a3d8;
        case 0x24a3dcu: goto label_24a3dc;
        case 0x24a3e0u: goto label_24a3e0;
        case 0x24a3e4u: goto label_24a3e4;
        case 0x24a3e8u: goto label_24a3e8;
        case 0x24a3ecu: goto label_24a3ec;
        case 0x24a3f0u: goto label_24a3f0;
        case 0x24a3f4u: goto label_24a3f4;
        case 0x24a3f8u: goto label_24a3f8;
        case 0x24a3fcu: goto label_24a3fc;
        case 0x24a400u: goto label_24a400;
        case 0x24a404u: goto label_24a404;
        case 0x24a408u: goto label_24a408;
        case 0x24a40cu: goto label_24a40c;
        case 0x24a410u: goto label_24a410;
        case 0x24a414u: goto label_24a414;
        case 0x24a418u: goto label_24a418;
        case 0x24a41cu: goto label_24a41c;
        case 0x24a420u: goto label_24a420;
        case 0x24a424u: goto label_24a424;
        case 0x24a428u: goto label_24a428;
        case 0x24a42cu: goto label_24a42c;
        case 0x24a430u: goto label_24a430;
        case 0x24a434u: goto label_24a434;
        case 0x24a438u: goto label_24a438;
        case 0x24a43cu: goto label_24a43c;
        case 0x24a440u: goto label_24a440;
        case 0x24a444u: goto label_24a444;
        case 0x24a448u: goto label_24a448;
        case 0x24a44cu: goto label_24a44c;
        case 0x24a450u: goto label_24a450;
        case 0x24a454u: goto label_24a454;
        case 0x24a458u: goto label_24a458;
        case 0x24a45cu: goto label_24a45c;
        case 0x24a460u: goto label_24a460;
        case 0x24a464u: goto label_24a464;
        case 0x24a468u: goto label_24a468;
        case 0x24a46cu: goto label_24a46c;
        case 0x24a470u: goto label_24a470;
        case 0x24a474u: goto label_24a474;
        case 0x24a478u: goto label_24a478;
        case 0x24a47cu: goto label_24a47c;
        case 0x24a480u: goto label_24a480;
        case 0x24a484u: goto label_24a484;
        case 0x24a488u: goto label_24a488;
        case 0x24a48cu: goto label_24a48c;
        case 0x24a490u: goto label_24a490;
        case 0x24a494u: goto label_24a494;
        default: break;
    }

    ctx->pc = 0x24a378u;

label_24a378:
    // 0x24a378: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x24a378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_24a37c:
    // 0x24a37c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x24a37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_24a380:
    // 0x24a380: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x24a380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_24a384:
    // 0x24a384: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24a384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24a388:
    // 0x24a388: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24a388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_24a38c:
    // 0x24a38c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x24a38cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24a390:
    // 0x24a390: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24a390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_24a394:
    // 0x24a394: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x24a394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_24a398:
    // 0x24a398: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x24a398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_24a39c:
    // 0x24a39c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24a39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_24a3a0:
    // 0x24a3a0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x24a3a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_24a3a4:
    // 0x24a3a4: 0x5440002f  bnel        $v0, $zero, . + 4 + (0x2F << 2)
label_24a3a8:
    if (ctx->pc == 0x24A3A8u) {
        ctx->pc = 0x24A3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A3A4u;
        // 0x24a3a8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A3ACu;
        goto label_24a3ac;
    }
    ctx->pc = 0x24A3A4u;
    {
        const bool branch_taken_0x24a3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a3a4) {
            ctx->pc = 0x24A3A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A3A4u;
            // 0x24a3a8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A464u;
            goto label_24a464;
        }
    }
    ctx->pc = 0x24A3ACu;
label_24a3ac:
    // 0x24a3ac: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x24a3acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_24a3b0:
    // 0x24a3b0: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x24a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
label_24a3b4:
    // 0x24a3b4: 0x244182a  slt         $v1, $s2, $a0
    ctx->pc = 0x24a3b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_24a3b8:
    // 0x24a3b8: 0x912821  addu        $a1, $a0, $s1
    ctx->pc = 0x24a3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_24a3bc:
    // 0x24a3bc: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x24a3bcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
label_24a3c0:
    // 0x24a3c0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x24a3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_24a3c4:
    // 0x24a3c4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x24a3c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_24a3c8:
    // 0x24a3c8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x24a3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_24a3cc:
    // 0x24a3cc: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x24a3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_24a3d0:
    // 0x24a3d0: 0xa40018  mult        $zero, $a1, $a0
    ctx->pc = 0x24a3d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_24a3d4:
    // 0x24a3d4: 0x8c6210d8  lw          $v0, 0x10D8($v1)
    ctx->pc = 0x24a3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4312)));
label_24a3d8:
    // 0x24a3d8: 0x2812  mflo        $a1
    ctx->pc = 0x24a3d8u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_24a3dc:
    // 0x24a3dc: 0x40f809  jalr        $v0
label_24a3e0:
    if (ctx->pc == 0x24A3E0u) {
        ctx->pc = 0x24A3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A3DCu;
        // 0x24a3e0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A3E4u;
        goto label_24a3e4;
    }
    ctx->pc = 0x24A3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24A3E4u);
        ctx->pc = 0x24A3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A3DCu;
        // 0x24a3e0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A3DCu, 0x24A3E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24A3E4u;
label_24a3e4:
    // 0x24a3e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24a3e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24a3e8:
    // 0x24a3e8: 0x54600015  bnel        $v1, $zero, . + 4 + (0x15 << 2)
label_24a3ec:
    if (ctx->pc == 0x24A3ECu) {
        ctx->pc = 0x24A3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A3E8u;
        // 0x24a3ec: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A3F0u;
        goto label_24a3f0;
    }
    ctx->pc = 0x24A3E8u;
    {
        const bool branch_taken_0x24a3e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a3e8) {
            ctx->pc = 0x24A3ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A3E8u;
            // 0x24a3ec: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A440u;
            goto label_24a440;
        }
    }
    ctx->pc = 0x24A3F0u;
label_24a3f0:
    // 0x24a3f0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x24a3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_24a3f4:
    // 0x24a3f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24a3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24a3f8:
    // 0x24a3f8: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x24a3f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_24a3fc:
    // 0x24a3fc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x24a3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_24a400:
    // 0x24a400: 0x245182a  slt         $v1, $s2, $a1
    ctx->pc = 0x24a400u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_24a404:
    // 0x24a404: 0x24a20003  addiu       $v0, $a1, 0x3
    ctx->pc = 0x24a404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_24a408:
    // 0x24a408: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x24a408u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5));
label_24a40c:
    // 0x24a40c: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x24a40cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
label_24a410:
    // 0x24a410: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x24a410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_24a414:
    // 0x24a414: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x24a414u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_24a418:
    // 0x24a418: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x24a418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_24a41c:
    // 0x24a41c: 0xa70018  mult        $zero, $a1, $a3
    ctx->pc = 0x24a41cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_24a420:
    // 0x24a420: 0x2812  mflo        $a1
    ctx->pc = 0x24a420u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_24a424:
    // 0x24a424: 0xc092848  jal         func_24A120
label_24a428:
    if (ctx->pc == 0x24A428u) {
        ctx->pc = 0x24A428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A424u;
        // 0x24a428: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A42Cu;
        goto label_24a42c;
    }
    ctx->pc = 0x24A424u;
    SET_GPR_U32(ctx, 31, 0x24A42Cu);
    ctx->pc = 0x24A428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A424u;
    // 0x24a428: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x24A424u, 0x24A42Cu)) {
        return;
    }
    ctx->pc = 0x24A42Cu;
label_24a42c:
    // 0x24a42c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24a42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24a430:
    // 0x24a430: 0xc09281a  jal         func_24A068
label_24a434:
    if (ctx->pc == 0x24A434u) {
        ctx->pc = 0x24A434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A430u;
        // 0x24a434: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A438u;
        goto label_24a438;
    }
    ctx->pc = 0x24A430u;
    SET_GPR_U32(ctx, 31, 0x24A438u);
    ctx->pc = 0x24A434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A430u;
    // 0x24a434: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x24A430u, 0x24A438u)) {
        return;
    }
    ctx->pc = 0x24A438u;
label_24a438:
    // 0x24a438: 0x10000010  b           . + 4 + (0x10 << 2)
label_24a43c:
    if (ctx->pc == 0x24A43Cu) {
        ctx->pc = 0x24A43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A438u;
        // 0x24a43c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A440u;
        goto label_24a440;
    }
    ctx->pc = 0x24A438u;
    {
        const bool branch_taken_0x24a438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A438u;
        // 0x24a43c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a438) {
            ctx->pc = 0x24A47Cu;
            goto label_24a47c;
        }
    }
    ctx->pc = 0x24A440u;
label_24a440:
    // 0x24a440: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x24a440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_24a444:
    // 0x24a444: 0x242202a  slt         $a0, $s2, $v0
    ctx->pc = 0x24a444u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_24a448:
    // 0x24a448: 0x24430003  addiu       $v1, $v0, 0x3
    ctx->pc = 0x24a448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_24a44c:
    // 0x24a44c: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x24a44cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2));
label_24a450:
    // 0x24a450: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24a450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_24a454:
    // 0x24a454: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x24a454u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_24a458:
    // 0x24a458: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24a458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24a45c:
    // 0x24a45c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x24a45cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_24a460:
    // 0x24a460: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x24a460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_24a464:
    // 0x24a464: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x24a464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_24a468:
    // 0x24a468: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x24a468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_24a46c:
    // 0x24a46c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x24a46cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24a470:
    // 0x24a470: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x24a470u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_24a474:
    // 0x24a474: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x24a474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_24a478:
    // 0x24a478: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x24a478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_24a47c:
    // 0x24a47c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x24a47cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_24a480:
    // 0x24a480: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x24a480u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24a484:
    // 0x24a484: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24a484u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24a488:
    // 0x24a488: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24a488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24a48c:
    // 0x24a48c: 0x3e00008  jr          $ra
label_24a490:
    if (ctx->pc == 0x24A490u) {
        ctx->pc = 0x24A490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A48Cu;
        // 0x24a490: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A494u;
        goto label_24a494;
    }
    ctx->pc = 0x24A48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A48Cu;
        // 0x24a490: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A48Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A494u;
label_24a494:
    // 0x24a494: 0x0  nop
    ctx->pc = 0x24a494u;
    // NOP
    ctx->pc = 0x24a498u;
}
