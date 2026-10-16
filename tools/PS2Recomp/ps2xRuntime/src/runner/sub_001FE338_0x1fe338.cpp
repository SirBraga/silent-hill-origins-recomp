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

// Function: sub_001FE338
// Address: 0x1fe338 - 0x1fe428
void sub_001FE338_0x1fe338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE338_0x1fe338");
#endif

    switch (ctx->pc) {
        case 0x1fe338u: goto label_1fe338;
        case 0x1fe33cu: goto label_1fe33c;
        case 0x1fe340u: goto label_1fe340;
        case 0x1fe344u: goto label_1fe344;
        case 0x1fe348u: goto label_1fe348;
        case 0x1fe34cu: goto label_1fe34c;
        case 0x1fe350u: goto label_1fe350;
        case 0x1fe354u: goto label_1fe354;
        case 0x1fe358u: goto label_1fe358;
        case 0x1fe35cu: goto label_1fe35c;
        case 0x1fe360u: goto label_1fe360;
        case 0x1fe364u: goto label_1fe364;
        case 0x1fe368u: goto label_1fe368;
        case 0x1fe36cu: goto label_1fe36c;
        case 0x1fe370u: goto label_1fe370;
        case 0x1fe374u: goto label_1fe374;
        case 0x1fe378u: goto label_1fe378;
        case 0x1fe37cu: goto label_1fe37c;
        case 0x1fe380u: goto label_1fe380;
        case 0x1fe384u: goto label_1fe384;
        case 0x1fe388u: goto label_1fe388;
        case 0x1fe38cu: goto label_1fe38c;
        case 0x1fe390u: goto label_1fe390;
        case 0x1fe394u: goto label_1fe394;
        case 0x1fe398u: goto label_1fe398;
        case 0x1fe39cu: goto label_1fe39c;
        case 0x1fe3a0u: goto label_1fe3a0;
        case 0x1fe3a4u: goto label_1fe3a4;
        case 0x1fe3a8u: goto label_1fe3a8;
        case 0x1fe3acu: goto label_1fe3ac;
        case 0x1fe3b0u: goto label_1fe3b0;
        case 0x1fe3b4u: goto label_1fe3b4;
        case 0x1fe3b8u: goto label_1fe3b8;
        case 0x1fe3bcu: goto label_1fe3bc;
        case 0x1fe3c0u: goto label_1fe3c0;
        case 0x1fe3c4u: goto label_1fe3c4;
        case 0x1fe3c8u: goto label_1fe3c8;
        case 0x1fe3ccu: goto label_1fe3cc;
        case 0x1fe3d0u: goto label_1fe3d0;
        case 0x1fe3d4u: goto label_1fe3d4;
        case 0x1fe3d8u: goto label_1fe3d8;
        case 0x1fe3dcu: goto label_1fe3dc;
        case 0x1fe3e0u: goto label_1fe3e0;
        case 0x1fe3e4u: goto label_1fe3e4;
        case 0x1fe3e8u: goto label_1fe3e8;
        case 0x1fe3ecu: goto label_1fe3ec;
        case 0x1fe3f0u: goto label_1fe3f0;
        case 0x1fe3f4u: goto label_1fe3f4;
        case 0x1fe3f8u: goto label_1fe3f8;
        case 0x1fe3fcu: goto label_1fe3fc;
        case 0x1fe400u: goto label_1fe400;
        case 0x1fe404u: goto label_1fe404;
        case 0x1fe408u: goto label_1fe408;
        case 0x1fe40cu: goto label_1fe40c;
        case 0x1fe410u: goto label_1fe410;
        case 0x1fe414u: goto label_1fe414;
        case 0x1fe418u: goto label_1fe418;
        case 0x1fe41cu: goto label_1fe41c;
        case 0x1fe420u: goto label_1fe420;
        case 0x1fe424u: goto label_1fe424;
        default: break;
    }

    ctx->pc = 0x1fe338u;

label_1fe338:
    // 0x1fe338: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1fe338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1fe33c:
    // 0x1fe33c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1fe33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1fe340:
    // 0x1fe340: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1fe340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1fe344:
    // 0x1fe344: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1fe344u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fe348:
    // 0x1fe348: 0x8c461a68  lw          $a2, 0x1A68($v0)
    ctx->pc = 0x1fe348u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6760)));
label_1fe34c:
    // 0x1fe34c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1fe34cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fe350:
    // 0x1fe350: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1fe350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1fe354:
    // 0x1fe354: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1fe354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1fe358:
    // 0x1fe358: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fe358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fe35c:
    // 0x1fe35c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fe35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1fe360:
    // 0x1fe360: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fe360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1fe364:
    // 0x1fe364: 0xc07f1c0  jal         func_1FC700
label_1fe368:
    if (ctx->pc == 0x1FE368u) {
        ctx->pc = 0x1FE368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE364u;
        // 0x1fe368: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE36Cu;
        goto label_1fe36c;
    }
    ctx->pc = 0x1FE364u;
    SET_GPR_U32(ctx, 31, 0x1FE36Cu);
    ctx->pc = 0x1FE368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE364u;
    // 0x1fe368: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x1FE364u, 0x1FE36Cu)) {
        return;
    }
    ctx->pc = 0x1FE36Cu;
label_1fe36c:
    // 0x1fe36c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1fe36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1fe370:
    // 0x1fe370: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fe370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fe374:
    // 0x1fe374: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_1fe378:
    if (ctx->pc == 0x1FE378u) {
        ctx->pc = 0x1FE378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE374u;
        // 0x1fe378: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE37Cu;
        goto label_1fe37c;
    }
    ctx->pc = 0x1FE374u;
    {
        const bool branch_taken_0x1fe374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE374u;
        // 0x1fe378: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe374) {
            ctx->pc = 0x1FE400u;
            goto label_1fe400;
        }
    }
    ctx->pc = 0x1FE37Cu;
label_1fe37c:
    // 0x1fe37c: 0x2453108c  addiu       $s3, $v0, 0x108C
    ctx->pc = 0x1fe37cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
label_1fe380:
    // 0x1fe380: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1fe380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1fe384:
    // 0x1fe384: 0x0  nop
    ctx->pc = 0x1fe384u;
    // NOP
label_1fe388:
    // 0x1fe388: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1fe388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1fe38c:
    // 0x1fe38c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_1fe390:
    if (ctx->pc == 0x1FE390u) {
        ctx->pc = 0x1FE390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE38Cu;
        // 0x1fe390: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE394u;
        goto label_1fe394;
    }
    ctx->pc = 0x1FE38Cu;
    {
        const bool branch_taken_0x1fe38c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE38Cu;
        // 0x1fe390: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe38c) {
            ctx->pc = 0x1FE3D0u;
            goto label_1fe3d0;
        }
    }
    ctx->pc = 0x1FE394u;
label_1fe394:
    // 0x1fe394: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1fe394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1fe398:
    // 0x1fe398: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1fe398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_1fe39c:
    // 0x1fe39c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1fe39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1fe3a0:
    // 0x1fe3a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fe3a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe3a4:
    // 0x1fe3a4: 0xc08063c  jal         func_2018F0
label_1fe3a8:
    if (ctx->pc == 0x1FE3A8u) {
        ctx->pc = 0x1FE3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3A4u;
        // 0x1fe3a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE3ACu;
        goto label_1fe3ac;
    }
    ctx->pc = 0x1FE3A4u;
    SET_GPR_U32(ctx, 31, 0x1FE3ACu);
    ctx->pc = 0x1FE3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE3A4u;
    // 0x1fe3a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2018F0u, 0x1FE3A4u, 0x1FE3ACu)) {
        return;
    }
    ctx->pc = 0x1FE3ACu;
label_1fe3ac:
    // 0x1fe3ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fe3acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fe3b0:
    // 0x1fe3b0: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1fe3b4:
    if (ctx->pc == 0x1FE3B4u) {
        ctx->pc = 0x1FE3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3B0u;
        // 0x1fe3b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE3B8u;
        goto label_1fe3b8;
    }
    ctx->pc = 0x1FE3B0u;
    {
        const bool branch_taken_0x1fe3b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3B0u;
        // 0x1fe3b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe3b0) {
            ctx->pc = 0x1FE3CCu;
            goto label_1fe3cc;
        }
    }
    ctx->pc = 0x1FE3B8u;
label_1fe3b8:
    // 0x1fe3b8: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x1fe3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1fe3bc:
    // 0x1fe3bc: 0x40f809  jalr        $v0
label_1fe3c0:
    if (ctx->pc == 0x1FE3C0u) {
        ctx->pc = 0x1FE3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3BCu;
        // 0x1fe3c0: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE3C4u;
        goto label_1fe3c4;
    }
    ctx->pc = 0x1FE3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FE3C4u);
        ctx->pc = 0x1FE3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3BCu;
        // 0x1fe3c0: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE3BCu, 0x1FE3C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FE3C4u;
label_1fe3c4:
    // 0x1fe3c4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1fe3c8:
    if (ctx->pc == 0x1FE3C8u) {
        ctx->pc = 0x1FE3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3C4u;
        // 0x1fe3c8: 0x8e110018  lw          $s1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE3CCu;
        goto label_1fe3cc;
    }
    ctx->pc = 0x1FE3C4u;
    {
        const bool branch_taken_0x1fe3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe3c4) {
            ctx->pc = 0x1FE3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE3C4u;
            // 0x1fe3c8: 0x8e110018  lw          $s1, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE3CCu;
            goto label_1fe3cc;
        }
    }
    ctx->pc = 0x1FE3CCu;
label_1fe3cc:
    // 0x1fe3cc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1fe3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1fe3d0:
    // 0x1fe3d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fe3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fe3d4:
    // 0x1fe3d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fe3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe3d8:
    // 0x1fe3d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fe3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1fe3dc:
    // 0x1fe3dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fe3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1fe3e0:
    // 0x1fe3e0: 0xc07f0c8  jal         func_1FC320
label_1fe3e4:
    if (ctx->pc == 0x1FE3E4u) {
        ctx->pc = 0x1FE3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3E0u;
        // 0x1fe3e4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE3E8u;
        goto label_1fe3e8;
    }
    ctx->pc = 0x1FE3E0u;
    SET_GPR_U32(ctx, 31, 0x1FE3E8u);
    ctx->pc = 0x1FE3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE3E0u;
    // 0x1fe3e4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x1FE3E0u, 0x1FE3E8u)) {
        return;
    }
    ctx->pc = 0x1FE3E8u;
label_1fe3e8:
    // 0x1fe3e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1fe3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1fe3ec:
    // 0x1fe3ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fe3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fe3f0:
    // 0x1fe3f0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1fe3f4:
    if (ctx->pc == 0x1FE3F4u) {
        ctx->pc = 0x1FE3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3F0u;
        // 0x1fe3f4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE3F8u;
        goto label_1fe3f8;
    }
    ctx->pc = 0x1FE3F0u;
    {
        const bool branch_taken_0x1fe3f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3F0u;
        // 0x1fe3f4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe3f0) {
            ctx->pc = 0x1FE404u;
            goto label_1fe404;
        }
    }
    ctx->pc = 0x1FE3F8u;
label_1fe3f8:
    // 0x1fe3f8: 0x1220ffe3  beqz        $s1, . + 4 + (-0x1D << 2)
label_1fe3fc:
    if (ctx->pc == 0x1FE3FCu) {
        ctx->pc = 0x1FE3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3F8u;
        // 0x1fe3fc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE400u;
        goto label_1fe400;
    }
    ctx->pc = 0x1FE3F8u;
    {
        const bool branch_taken_0x1fe3f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3F8u;
        // 0x1fe3fc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe3f8) {
            ctx->pc = 0x1FE388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe388;
        }
    }
    ctx->pc = 0x1FE400u;
label_1fe400:
    // 0x1fe400: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1fe400u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fe404:
    // 0x1fe404: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1fe404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1fe408:
    // 0x1fe408: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1fe408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1fe40c:
    // 0x1fe40c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1fe40cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fe410:
    // 0x1fe410: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fe410u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fe414:
    // 0x1fe414: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fe414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1fe418:
    // 0x1fe418: 0x3e00008  jr          $ra
label_1fe41c:
    if (ctx->pc == 0x1FE41Cu) {
        ctx->pc = 0x1FE41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE418u;
        // 0x1fe41c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE420u;
        goto label_1fe420;
    }
    ctx->pc = 0x1FE418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE418u;
        // 0x1fe41c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE420u;
label_1fe420:
    // 0x1fe420: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1fe420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1fe424:
    // 0x1fe424: 0x0  nop
    ctx->pc = 0x1fe424u;
    // NOP
    ctx->pc = 0x1fe428u;
}
