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

// Function: sub_0020C340
// Address: 0x20c340 - 0x20c518
void sub_0020C340_0x20c340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C340_0x20c340");
#endif

    switch (ctx->pc) {
        case 0x20c340u: goto label_20c340;
        case 0x20c344u: goto label_20c344;
        case 0x20c348u: goto label_20c348;
        case 0x20c34cu: goto label_20c34c;
        case 0x20c350u: goto label_20c350;
        case 0x20c354u: goto label_20c354;
        case 0x20c358u: goto label_20c358;
        case 0x20c35cu: goto label_20c35c;
        case 0x20c360u: goto label_20c360;
        case 0x20c364u: goto label_20c364;
        case 0x20c368u: goto label_20c368;
        case 0x20c36cu: goto label_20c36c;
        case 0x20c370u: goto label_20c370;
        case 0x20c374u: goto label_20c374;
        case 0x20c378u: goto label_20c378;
        case 0x20c37cu: goto label_20c37c;
        case 0x20c380u: goto label_20c380;
        case 0x20c384u: goto label_20c384;
        case 0x20c388u: goto label_20c388;
        case 0x20c38cu: goto label_20c38c;
        case 0x20c390u: goto label_20c390;
        case 0x20c394u: goto label_20c394;
        case 0x20c398u: goto label_20c398;
        case 0x20c39cu: goto label_20c39c;
        case 0x20c3a0u: goto label_20c3a0;
        case 0x20c3a4u: goto label_20c3a4;
        case 0x20c3a8u: goto label_20c3a8;
        case 0x20c3acu: goto label_20c3ac;
        case 0x20c3b0u: goto label_20c3b0;
        case 0x20c3b4u: goto label_20c3b4;
        case 0x20c3b8u: goto label_20c3b8;
        case 0x20c3bcu: goto label_20c3bc;
        case 0x20c3c0u: goto label_20c3c0;
        case 0x20c3c4u: goto label_20c3c4;
        case 0x20c3c8u: goto label_20c3c8;
        case 0x20c3ccu: goto label_20c3cc;
        case 0x20c3d0u: goto label_20c3d0;
        case 0x20c3d4u: goto label_20c3d4;
        case 0x20c3d8u: goto label_20c3d8;
        case 0x20c3dcu: goto label_20c3dc;
        case 0x20c3e0u: goto label_20c3e0;
        case 0x20c3e4u: goto label_20c3e4;
        case 0x20c3e8u: goto label_20c3e8;
        case 0x20c3ecu: goto label_20c3ec;
        case 0x20c3f0u: goto label_20c3f0;
        case 0x20c3f4u: goto label_20c3f4;
        case 0x20c3f8u: goto label_20c3f8;
        case 0x20c3fcu: goto label_20c3fc;
        case 0x20c400u: goto label_20c400;
        case 0x20c404u: goto label_20c404;
        case 0x20c408u: goto label_20c408;
        case 0x20c40cu: goto label_20c40c;
        case 0x20c410u: goto label_20c410;
        case 0x20c414u: goto label_20c414;
        case 0x20c418u: goto label_20c418;
        case 0x20c41cu: goto label_20c41c;
        case 0x20c420u: goto label_20c420;
        case 0x20c424u: goto label_20c424;
        case 0x20c428u: goto label_20c428;
        case 0x20c42cu: goto label_20c42c;
        case 0x20c430u: goto label_20c430;
        case 0x20c434u: goto label_20c434;
        case 0x20c438u: goto label_20c438;
        case 0x20c43cu: goto label_20c43c;
        case 0x20c440u: goto label_20c440;
        case 0x20c444u: goto label_20c444;
        case 0x20c448u: goto label_20c448;
        case 0x20c44cu: goto label_20c44c;
        case 0x20c450u: goto label_20c450;
        case 0x20c454u: goto label_20c454;
        case 0x20c458u: goto label_20c458;
        case 0x20c45cu: goto label_20c45c;
        case 0x20c460u: goto label_20c460;
        case 0x20c464u: goto label_20c464;
        case 0x20c468u: goto label_20c468;
        case 0x20c46cu: goto label_20c46c;
        case 0x20c470u: goto label_20c470;
        case 0x20c474u: goto label_20c474;
        case 0x20c478u: goto label_20c478;
        case 0x20c47cu: goto label_20c47c;
        case 0x20c480u: goto label_20c480;
        case 0x20c484u: goto label_20c484;
        case 0x20c488u: goto label_20c488;
        case 0x20c48cu: goto label_20c48c;
        case 0x20c490u: goto label_20c490;
        case 0x20c494u: goto label_20c494;
        case 0x20c498u: goto label_20c498;
        case 0x20c49cu: goto label_20c49c;
        case 0x20c4a0u: goto label_20c4a0;
        case 0x20c4a4u: goto label_20c4a4;
        case 0x20c4a8u: goto label_20c4a8;
        case 0x20c4acu: goto label_20c4ac;
        case 0x20c4b0u: goto label_20c4b0;
        case 0x20c4b4u: goto label_20c4b4;
        case 0x20c4b8u: goto label_20c4b8;
        case 0x20c4bcu: goto label_20c4bc;
        case 0x20c4c0u: goto label_20c4c0;
        case 0x20c4c4u: goto label_20c4c4;
        case 0x20c4c8u: goto label_20c4c8;
        case 0x20c4ccu: goto label_20c4cc;
        case 0x20c4d0u: goto label_20c4d0;
        case 0x20c4d4u: goto label_20c4d4;
        case 0x20c4d8u: goto label_20c4d8;
        case 0x20c4dcu: goto label_20c4dc;
        case 0x20c4e0u: goto label_20c4e0;
        case 0x20c4e4u: goto label_20c4e4;
        case 0x20c4e8u: goto label_20c4e8;
        case 0x20c4ecu: goto label_20c4ec;
        case 0x20c4f0u: goto label_20c4f0;
        case 0x20c4f4u: goto label_20c4f4;
        case 0x20c4f8u: goto label_20c4f8;
        case 0x20c4fcu: goto label_20c4fc;
        case 0x20c500u: goto label_20c500;
        case 0x20c504u: goto label_20c504;
        case 0x20c508u: goto label_20c508;
        case 0x20c50cu: goto label_20c50c;
        case 0x20c510u: goto label_20c510;
        case 0x20c514u: goto label_20c514;
        default: break;
    }

    ctx->pc = 0x20c340u;

label_20c340:
    // 0x20c340: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x20c340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_20c344:
    // 0x20c344: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c348:
    // 0x20c348: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x20c348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_20c34c:
    // 0x20c34c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x20c34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_20c350:
    // 0x20c350: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20c350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20c354:
    // 0x20c354: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x20c354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_20c358:
    // 0x20c358: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20c358u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20c35c:
    // 0x20c35c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x20c35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_20c360:
    // 0x20c360: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x20c360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_20c364:
    // 0x20c364: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x20c364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_20c368:
    // 0x20c368: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20c368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_20c36c:
    // 0x20c36c: 0x8e03019c  lw          $v1, 0x19C($s0)
    ctx->pc = 0x20c36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 412)));
label_20c370:
    // 0x20c370: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x20c370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_20c374:
    // 0x20c374: 0x8e1301bc  lw          $s3, 0x1BC($s0)
    ctx->pc = 0x20c374u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_20c378:
    // 0x20c378: 0x1080002c  beqz        $a0, . + 4 + (0x2C << 2)
label_20c37c:
    if (ctx->pc == 0x20C37Cu) {
        ctx->pc = 0x20C37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C378u;
        // 0x20c37c: 0x62a804  sllv        $s5, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C380u;
        goto label_20c380;
    }
    ctx->pc = 0x20C378u;
    {
        const bool branch_taken_0x20c378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C378u;
        // 0x20c37c: 0x62a804  sllv        $s5, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c378) {
            ctx->pc = 0x20C42Cu;
            goto label_20c42c;
        }
    }
    ctx->pc = 0x20C380u;
label_20c380:
    // 0x20c380: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x20c380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_20c384:
    // 0x20c384: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
label_20c388:
    if (ctx->pc == 0x20C388u) {
        ctx->pc = 0x20C388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C384u;
        // 0x20c388: 0xafb00014  sw          $s0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C38Cu;
        goto label_20c38c;
    }
    ctx->pc = 0x20C384u;
    {
        const bool branch_taken_0x20c384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c384) {
            ctx->pc = 0x20C388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C384u;
            // 0x20c388: 0xafb00014  sw          $s0, 0x14($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C430u;
            goto label_20c430;
        }
    }
    ctx->pc = 0x20C38Cu;
label_20c38c:
    // 0x20c38c: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x20c38cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_20c390:
    // 0x20c390: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x20c390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20c394:
    // 0x20c394: 0x8e0701b8  lw          $a3, 0x1B8($s0)
    ctx->pc = 0x20c394u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_20c398:
    // 0x20c398: 0xa6282a  slt         $a1, $a1, $a2
    ctx->pc = 0x20c398u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_20c39c:
    // 0x20c39c: 0x24c20007  addiu       $v0, $a2, 0x7
    ctx->pc = 0x20c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
label_20c3a0:
    // 0x20c3a0: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x20c3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_20c3a4:
    // 0x20c3a4: 0xc5100b  movn        $v0, $a2, $a1
    ctx->pc = 0x20c3a4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6));
label_20c3a8:
    // 0x20c3a8: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x20c3a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_20c3ac:
    // 0x20c3ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20c3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20c3b0:
    // 0x20c3b0: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x20c3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
label_20c3b4:
    // 0x20c3b4: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x20c3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_20c3b8:
    // 0x20c3b8: 0x8e0301b8  lw          $v1, 0x1B8($s0)
    ctx->pc = 0x20c3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_20c3bc:
    // 0x20c3bc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x20c3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_20c3c0:
    // 0x20c3c0: 0x40f809  jalr        $v0
label_20c3c4:
    if (ctx->pc == 0x20C3C4u) {
        ctx->pc = 0x20C3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C3C0u;
        // 0x20c3c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C3C8u;
        goto label_20c3c8;
    }
    ctx->pc = 0x20C3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20C3C8u);
        ctx->pc = 0x20C3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C3C0u;
        // 0x20c3c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C3C0u, 0x20C3C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20C3C8u;
label_20c3c8:
    // 0x20c3c8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_20c3cc:
    if (ctx->pc == 0x20C3CCu) {
        ctx->pc = 0x20C3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C3C8u;
        // 0x20c3cc: 0x8e020148  lw          $v0, 0x148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C3D0u;
        goto label_20c3d0;
    }
    ctx->pc = 0x20C3C8u;
    {
        const bool branch_taken_0x20c3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c3c8) {
            ctx->pc = 0x20C3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C3C8u;
            // 0x20c3cc: 0x8e020148  lw          $v0, 0x148($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C3D8u;
            goto label_20c3d8;
        }
    }
    ctx->pc = 0x20C3D0u;
label_20c3d0:
    // 0x20c3d0: 0x10000012  b           . + 4 + (0x12 << 2)
label_20c3d4:
    if (ctx->pc == 0x20C3D4u) {
        ctx->pc = 0x20C3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C3D0u;
        // 0x20c3d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C3D8u;
        goto label_20c3d8;
    }
    ctx->pc = 0x20C3D0u;
    {
        const bool branch_taken_0x20c3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C3D0u;
        // 0x20c3d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c3d0) {
            ctx->pc = 0x20C41Cu;
            goto label_20c41c;
        }
    }
    ctx->pc = 0x20C3D8u;
label_20c3d8:
    // 0x20c3d8: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_20c3dc:
    if (ctx->pc == 0x20C3DCu) {
        ctx->pc = 0x20C3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C3D8u;
        // 0x20c3dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C3E0u;
        goto label_20c3e0;
    }
    ctx->pc = 0x20C3D8u;
    {
        const bool branch_taken_0x20c3d8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x20C3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C3D8u;
        // 0x20c3dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c3d8) {
            ctx->pc = 0x20C400u;
            goto label_20c400;
        }
    }
    ctx->pc = 0x20C3E0u;
label_20c3e0:
    // 0x20c3e0: 0x26630024  addiu       $v1, $s3, 0x24
    ctx->pc = 0x20c3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
label_20c3e4:
    // 0x20c3e4: 0x0  nop
    ctx->pc = 0x20c3e4u;
    // NOP
label_20c3e8:
    // 0x20c3e8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x20c3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_20c3ec:
    // 0x20c3ec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x20c3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_20c3f0:
    // 0x20c3f0: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x20c3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_20c3f4:
    // 0x20c3f4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x20c3f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20c3f8:
    // 0x20c3f8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_20c3fc:
    if (ctx->pc == 0x20C3FCu) {
        ctx->pc = 0x20C3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C3F8u;
        // 0x20c3fc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C400u;
        goto label_20c400;
    }
    ctx->pc = 0x20C3F8u;
    {
        const bool branch_taken_0x20c3f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C3F8u;
        // 0x20c3fc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c3f8) {
            ctx->pc = 0x20C3E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20c3e8;
        }
    }
    ctx->pc = 0x20C400u;
label_20c400:
    // 0x20c400: 0xae600020  sw          $zero, 0x20($s3)
    ctx->pc = 0x20c400u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
label_20c404:
    // 0x20c404: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x20c404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_20c408:
    // 0x20c408: 0xae620034  sw          $v0, 0x34($s3)
    ctx->pc = 0x20c408u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 2));
label_20c40c:
    // 0x20c40c: 0x8e0301a0  lw          $v1, 0x1A0($s0)
    ctx->pc = 0x20c40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
label_20c410:
    // 0x20c410: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_20c414:
    if (ctx->pc == 0x20C414u) {
        ctx->pc = 0x20C414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C410u;
        // 0x20c414: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C418u;
        goto label_20c418;
    }
    ctx->pc = 0x20C410u;
    {
        const bool branch_taken_0x20c410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c410) {
            ctx->pc = 0x20C414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C410u;
            // 0x20c414: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C418u;
            goto label_20c418;
        }
    }
    ctx->pc = 0x20C418u;
label_20c418:
    // 0x20c418: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c41c:
    // 0x20c41c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_20c420:
    if (ctx->pc == 0x20C420u) {
        ctx->pc = 0x20C420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C41Cu;
        // 0x20c420: 0xafb00014  sw          $s0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C424u;
        goto label_20c424;
    }
    ctx->pc = 0x20C41Cu;
    {
        const bool branch_taken_0x20c41c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c41c) {
            ctx->pc = 0x20C420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C41Cu;
            // 0x20c420: 0xafb00014  sw          $s0, 0x14($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C430u;
            goto label_20c430;
        }
    }
    ctx->pc = 0x20C424u;
label_20c424:
    // 0x20c424: 0x10000032  b           . + 4 + (0x32 << 2)
label_20c428:
    if (ctx->pc == 0x20C428u) {
        ctx->pc = 0x20C428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C424u;
        // 0x20c428: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C42Cu;
        goto label_20c42c;
    }
    ctx->pc = 0x20C424u;
    {
        const bool branch_taken_0x20c424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C424u;
        // 0x20c428: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c424) {
            ctx->pc = 0x20C4F0u;
            goto label_20c4f0;
        }
    }
    ctx->pc = 0x20C42Cu;
label_20c42c:
    // 0x20c42c: 0xafb00014  sw          $s0, 0x14($sp)
    ctx->pc = 0x20c42cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 16));
label_20c430:
    // 0x20c430: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x20c430u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c434:
    // 0x20c434: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x20c434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_20c438:
    // 0x20c438: 0x8e050164  lw          $a1, 0x164($s0)
    ctx->pc = 0x20c438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
label_20c43c:
    // 0x20c43c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20c43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20c440:
    // 0x20c440: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x20c440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_20c444:
    // 0x20c444: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x20c444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_20c448:
    // 0x20c448: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x20c448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_20c44c:
    // 0x20c44c: 0xde670010  ld          $a3, 0x10($s3)
    ctx->pc = 0x20c44cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 19), 16)));
label_20c450:
    // 0x20c450: 0x18a0001b  blez        $a1, . + 4 + (0x1B << 2)
label_20c454:
    if (ctx->pc == 0x20C454u) {
        ctx->pc = 0x20C454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C450u;
        // 0x20c454: 0x8e660018  lw          $a2, 0x18($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C458u;
        goto label_20c458;
    }
    ctx->pc = 0x20C450u;
    {
        const bool branch_taken_0x20c450 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x20C454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C450u;
        // 0x20c454: 0x8e660018  lw          $a2, 0x18($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c450) {
            ctx->pc = 0x20C4C0u;
            goto label_20c4c0;
        }
    }
    ctx->pc = 0x20C458u;
label_20c458:
    // 0x20c458: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x20c458u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20c45c:
    // 0x20c45c: 0x0  nop
    ctx->pc = 0x20c45cu;
    // NOP
label_20c460:
    // 0x20c460: 0x1cc00008  bgtz        $a2, . + 4 + (0x8 << 2)
label_20c464:
    if (ctx->pc == 0x20C464u) {
        ctx->pc = 0x20C464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C460u;
        // 0x20c464: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C468u;
        goto label_20c468;
    }
    ctx->pc = 0x20C460u;
    {
        const bool branch_taken_0x20c460 = (GPR_S64(ctx, 6) > 0);
        ctx->pc = 0x20C464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C460u;
        // 0x20c464: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c460) {
            ctx->pc = 0x20C484u;
            goto label_20c484;
        }
    }
    ctx->pc = 0x20C468u;
label_20c468:
    // 0x20c468: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x20c468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_20c46c:
    // 0x20c46c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20c46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20c470:
    // 0x20c470: 0xc087e18  jal         func_21F860
label_20c474:
    if (ctx->pc == 0x20C474u) {
        ctx->pc = 0x20C474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C470u;
        // 0x20c474: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C478u;
        goto label_20c478;
    }
    ctx->pc = 0x20C470u;
    SET_GPR_U32(ctx, 31, 0x20C478u);
    ctx->pc = 0x20C474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C470u;
    // 0x20c474: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21F860u, 0x20C470u, 0x20C478u)) {
        return;
    }
    ctx->pc = 0x20C478u;
label_20c478:
    // 0x20c478: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
label_20c47c:
    if (ctx->pc == 0x20C47Cu) {
        ctx->pc = 0x20C47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C478u;
        // 0x20c47c: 0xdfa70008  ld          $a3, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C480u;
        goto label_20c480;
    }
    ctx->pc = 0x20C478u;
    {
        const bool branch_taken_0x20c478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C478u;
        // 0x20c47c: 0xdfa70008  ld          $a3, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c478) {
            ctx->pc = 0x20C424u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20c424;
        }
    }
    ctx->pc = 0x20C480u;
label_20c480:
    // 0x20c480: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x20c480u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_20c484:
    // 0x20c484: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x20c484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_20c488:
    // 0x20c488: 0xc71017  dsrav       $v0, $a3, $a2
    ctx->pc = 0x20c488u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 7) >> (GPR_U32(ctx, 6) & 0x3F));
label_20c48c:
    // 0x20c48c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20c48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_20c490:
    // 0x20c490: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20c490u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_20c494:
    // 0x20c494: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20c494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_20c498:
    // 0x20c498: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_20c49c:
    if (ctx->pc == 0x20C49Cu) {
        ctx->pc = 0x20C49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C498u;
        // 0x20c49c: 0x8e020164  lw          $v0, 0x164($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C4A0u;
        goto label_20c4a0;
    }
    ctx->pc = 0x20C498u;
    {
        const bool branch_taken_0x20c498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c498) {
            ctx->pc = 0x20C49Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C498u;
            // 0x20c49c: 0x8e020164  lw          $v0, 0x164($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C4B0u;
            goto label_20c4b0;
        }
    }
    ctx->pc = 0x20C4A0u;
label_20c4a0:
    // 0x20c4a0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x20c4a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_20c4a4:
    // 0x20c4a4: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x20c4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
label_20c4a8:
    // 0x20c4a8: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x20c4a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_20c4ac:
    // 0x20c4ac: 0x8e020164  lw          $v0, 0x164($s0)
    ctx->pc = 0x20c4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
label_20c4b0:
    // 0x20c4b0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x20c4b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_20c4b4:
    // 0x20c4b4: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x20c4b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20c4b8:
    // 0x20c4b8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_20c4bc:
    if (ctx->pc == 0x20C4BCu) {
        ctx->pc = 0x20C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C4B8u;
        // 0x20c4bc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C4C0u;
        goto label_20c4c0;
    }
    ctx->pc = 0x20C4B8u;
    {
        const bool branch_taken_0x20c4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C4B8u;
        // 0x20c4bc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c4b8) {
            ctx->pc = 0x20C460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20c460;
        }
    }
    ctx->pc = 0x20C4C0u;
label_20c4c0:
    // 0x20c4c0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20c4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20c4c4:
    // 0x20c4c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c4c8:
    // 0x20c4c8: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x20c4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_20c4cc:
    // 0x20c4cc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x20c4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_20c4d0:
    // 0x20c4d0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x20c4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_20c4d4:
    // 0x20c4d4: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x20c4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_20c4d8:
    // 0x20c4d8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x20c4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_20c4dc:
    // 0x20c4dc: 0xfe670010  sd          $a3, 0x10($s3)
    ctx->pc = 0x20c4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 7));
label_20c4e0:
    // 0x20c4e0: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x20c4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_20c4e4:
    // 0x20c4e4: 0xae660018  sw          $a2, 0x18($s3)
    ctx->pc = 0x20c4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 6));
label_20c4e8:
    // 0x20c4e8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20c4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_20c4ec:
    // 0x20c4ec: 0xae630034  sw          $v1, 0x34($s3)
    ctx->pc = 0x20c4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
label_20c4f0:
    // 0x20c4f0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x20c4f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_20c4f4:
    // 0x20c4f4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x20c4f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_20c4f8:
    // 0x20c4f8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x20c4f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20c4fc:
    // 0x20c4fc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x20c4fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20c500:
    // 0x20c500: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x20c500u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20c504:
    // 0x20c504: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x20c504u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20c508:
    // 0x20c508: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20c508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20c50c:
    // 0x20c50c: 0x3e00008  jr          $ra
label_20c510:
    if (ctx->pc == 0x20C510u) {
        ctx->pc = 0x20C510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C50Cu;
        // 0x20c510: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C514u;
        goto label_20c514;
    }
    ctx->pc = 0x20C50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C50Cu;
        // 0x20c510: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C50Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C514u;
label_20c514:
    // 0x20c514: 0x0  nop
    ctx->pc = 0x20c514u;
    // NOP
    ctx->pc = 0x20c518u;
}
