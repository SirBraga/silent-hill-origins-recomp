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

// Function: sub_0019A2C0
// Address: 0x19a2c0 - 0x19a488
void sub_0019A2C0_0x19a2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019A2C0_0x19a2c0");
#endif

    switch (ctx->pc) {
        case 0x19a2c0u: goto label_19a2c0;
        case 0x19a2c4u: goto label_19a2c4;
        case 0x19a2c8u: goto label_19a2c8;
        case 0x19a2ccu: goto label_19a2cc;
        case 0x19a2d0u: goto label_19a2d0;
        case 0x19a2d4u: goto label_19a2d4;
        case 0x19a2d8u: goto label_19a2d8;
        case 0x19a2dcu: goto label_19a2dc;
        case 0x19a2e0u: goto label_19a2e0;
        case 0x19a2e4u: goto label_19a2e4;
        case 0x19a2e8u: goto label_19a2e8;
        case 0x19a2ecu: goto label_19a2ec;
        case 0x19a2f0u: goto label_19a2f0;
        case 0x19a2f4u: goto label_19a2f4;
        case 0x19a2f8u: goto label_19a2f8;
        case 0x19a2fcu: goto label_19a2fc;
        case 0x19a300u: goto label_19a300;
        case 0x19a304u: goto label_19a304;
        case 0x19a308u: goto label_19a308;
        case 0x19a30cu: goto label_19a30c;
        case 0x19a310u: goto label_19a310;
        case 0x19a314u: goto label_19a314;
        case 0x19a318u: goto label_19a318;
        case 0x19a31cu: goto label_19a31c;
        case 0x19a320u: goto label_19a320;
        case 0x19a324u: goto label_19a324;
        case 0x19a328u: goto label_19a328;
        case 0x19a32cu: goto label_19a32c;
        case 0x19a330u: goto label_19a330;
        case 0x19a334u: goto label_19a334;
        case 0x19a338u: goto label_19a338;
        case 0x19a33cu: goto label_19a33c;
        case 0x19a340u: goto label_19a340;
        case 0x19a344u: goto label_19a344;
        case 0x19a348u: goto label_19a348;
        case 0x19a34cu: goto label_19a34c;
        case 0x19a350u: goto label_19a350;
        case 0x19a354u: goto label_19a354;
        case 0x19a358u: goto label_19a358;
        case 0x19a35cu: goto label_19a35c;
        case 0x19a360u: goto label_19a360;
        case 0x19a364u: goto label_19a364;
        case 0x19a368u: goto label_19a368;
        case 0x19a36cu: goto label_19a36c;
        case 0x19a370u: goto label_19a370;
        case 0x19a374u: goto label_19a374;
        case 0x19a378u: goto label_19a378;
        case 0x19a37cu: goto label_19a37c;
        case 0x19a380u: goto label_19a380;
        case 0x19a384u: goto label_19a384;
        case 0x19a388u: goto label_19a388;
        case 0x19a38cu: goto label_19a38c;
        case 0x19a390u: goto label_19a390;
        case 0x19a394u: goto label_19a394;
        case 0x19a398u: goto label_19a398;
        case 0x19a39cu: goto label_19a39c;
        case 0x19a3a0u: goto label_19a3a0;
        case 0x19a3a4u: goto label_19a3a4;
        case 0x19a3a8u: goto label_19a3a8;
        case 0x19a3acu: goto label_19a3ac;
        case 0x19a3b0u: goto label_19a3b0;
        case 0x19a3b4u: goto label_19a3b4;
        case 0x19a3b8u: goto label_19a3b8;
        case 0x19a3bcu: goto label_19a3bc;
        case 0x19a3c0u: goto label_19a3c0;
        case 0x19a3c4u: goto label_19a3c4;
        case 0x19a3c8u: goto label_19a3c8;
        case 0x19a3ccu: goto label_19a3cc;
        case 0x19a3d0u: goto label_19a3d0;
        case 0x19a3d4u: goto label_19a3d4;
        case 0x19a3d8u: goto label_19a3d8;
        case 0x19a3dcu: goto label_19a3dc;
        case 0x19a3e0u: goto label_19a3e0;
        case 0x19a3e4u: goto label_19a3e4;
        case 0x19a3e8u: goto label_19a3e8;
        case 0x19a3ecu: goto label_19a3ec;
        case 0x19a3f0u: goto label_19a3f0;
        case 0x19a3f4u: goto label_19a3f4;
        case 0x19a3f8u: goto label_19a3f8;
        case 0x19a3fcu: goto label_19a3fc;
        case 0x19a400u: goto label_19a400;
        case 0x19a404u: goto label_19a404;
        case 0x19a408u: goto label_19a408;
        case 0x19a40cu: goto label_19a40c;
        case 0x19a410u: goto label_19a410;
        case 0x19a414u: goto label_19a414;
        case 0x19a418u: goto label_19a418;
        case 0x19a41cu: goto label_19a41c;
        case 0x19a420u: goto label_19a420;
        case 0x19a424u: goto label_19a424;
        case 0x19a428u: goto label_19a428;
        case 0x19a42cu: goto label_19a42c;
        case 0x19a430u: goto label_19a430;
        case 0x19a434u: goto label_19a434;
        case 0x19a438u: goto label_19a438;
        case 0x19a43cu: goto label_19a43c;
        case 0x19a440u: goto label_19a440;
        case 0x19a444u: goto label_19a444;
        case 0x19a448u: goto label_19a448;
        case 0x19a44cu: goto label_19a44c;
        case 0x19a450u: goto label_19a450;
        case 0x19a454u: goto label_19a454;
        case 0x19a458u: goto label_19a458;
        case 0x19a45cu: goto label_19a45c;
        case 0x19a460u: goto label_19a460;
        case 0x19a464u: goto label_19a464;
        case 0x19a468u: goto label_19a468;
        case 0x19a46cu: goto label_19a46c;
        case 0x19a470u: goto label_19a470;
        case 0x19a474u: goto label_19a474;
        case 0x19a478u: goto label_19a478;
        case 0x19a47cu: goto label_19a47c;
        case 0x19a480u: goto label_19a480;
        case 0x19a484u: goto label_19a484;
        default: break;
    }

    ctx->pc = 0x19a2c0u;

label_19a2c0:
    // 0x19a2c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x19a2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_19a2c4:
    // 0x19a2c4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x19a2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_19a2c8:
    // 0x19a2c8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x19a2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_19a2cc:
    // 0x19a2cc: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x19a2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_19a2d0:
    // 0x19a2d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19a2d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19a2d4:
    // 0x19a2d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19a2d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19a2d8:
    // 0x19a2d8: 0x8c468130  lw          $a2, -0x7ED0($v0)
    ctx->pc = 0x19a2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294934832)));
label_19a2dc:
    // 0x19a2dc: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x19a2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_19a2e0:
    // 0x19a2e0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x19a2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_19a2e4:
    // 0x19a2e4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x19a2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_19a2e8:
    // 0x19a2e8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x19a2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_19a2ec:
    // 0x19a2ec: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19a2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_19a2f0:
    // 0x19a2f0: 0xc07f1c0  jal         func_1FC700
label_19a2f4:
    if (ctx->pc == 0x19A2F4u) {
        ctx->pc = 0x19A2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A2F0u;
        // 0x19a2f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A2F8u;
        goto label_19a2f8;
    }
    ctx->pc = 0x19A2F0u;
    SET_GPR_U32(ctx, 31, 0x19A2F8u);
    ctx->pc = 0x19A2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A2F0u;
    // 0x19a2f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x19A2F0u, 0x19A2F8u)) {
        return;
    }
    ctx->pc = 0x19A2F8u;
label_19a2f8:
    // 0x19a2f8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19a2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_19a2fc:
    // 0x19a2fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19a2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19a300:
    // 0x19a300: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
label_19a304:
    if (ctx->pc == 0x19A304u) {
        ctx->pc = 0x19A304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A300u;
        // 0x19a304: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A308u;
        goto label_19a308;
    }
    ctx->pc = 0x19A300u;
    {
        const bool branch_taken_0x19a300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A300u;
        // 0x19a304: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a300) {
            ctx->pc = 0x19A3B4u;
            goto label_19a3b4;
        }
    }
    ctx->pc = 0x19A308u;
label_19a308:
    // 0x19a308: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x19a308u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19a30c:
    // 0x19a30c: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x19a30cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19a310:
    // 0x19a310: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x19a310u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19a314:
    // 0x19a314: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x19a314u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_19a318:
    // 0x19a318: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x19a318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_19a31c:
    // 0x19a31c: 0x50550009  beql        $v0, $s5, . + 4 + (0x9 << 2)
label_19a320:
    if (ctx->pc == 0x19A320u) {
        ctx->pc = 0x19A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A31Cu;
        // 0x19a320: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A324u;
        goto label_19a324;
    }
    ctx->pc = 0x19A31Cu;
    {
        const bool branch_taken_0x19a31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x19a31c) {
            ctx->pc = 0x19A320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A31Cu;
            // 0x19a320: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A344u;
            goto label_19a344;
        }
    }
    ctx->pc = 0x19A324u;
label_19a324:
    // 0x19a324: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_19a328:
    if (ctx->pc == 0x19A328u) {
        ctx->pc = 0x19A328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A324u;
        // 0x19a328: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A32Cu;
        goto label_19a32c;
    }
    ctx->pc = 0x19A324u;
    {
        const bool branch_taken_0x19a324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a324) {
            ctx->pc = 0x19A328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A324u;
            // 0x19a328: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A350u;
            goto label_19a350;
        }
    }
    ctx->pc = 0x19A32Cu;
label_19a32c:
    // 0x19a32c: 0x5054000b  beql        $v0, $s4, . + 4 + (0xB << 2)
label_19a330:
    if (ctx->pc == 0x19A330u) {
        ctx->pc = 0x19A330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A32Cu;
        // 0x19a330: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A334u;
        goto label_19a334;
    }
    ctx->pc = 0x19A32Cu;
    {
        const bool branch_taken_0x19a32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x19a32c) {
            ctx->pc = 0x19A330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A32Cu;
            // 0x19a330: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A35Cu;
            goto label_19a35c;
        }
    }
    ctx->pc = 0x19A334u;
label_19a334:
    // 0x19a334: 0x1053000f  beq         $v0, $s3, . + 4 + (0xF << 2)
label_19a338:
    if (ctx->pc == 0x19A338u) {
        ctx->pc = 0x19A338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A334u;
        // 0x19a338: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A33Cu;
        goto label_19a33c;
    }
    ctx->pc = 0x19A334u;
    {
        const bool branch_taken_0x19a334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x19A338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A334u;
        // 0x19a338: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a334) {
            ctx->pc = 0x19A374u;
            goto label_19a374;
        }
    }
    ctx->pc = 0x19A33Cu;
label_19a33c:
    // 0x19a33c: 0x10000014  b           . + 4 + (0x14 << 2)
label_19a340:
    if (ctx->pc == 0x19A340u) {
        ctx->pc = 0x19A340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A33Cu;
        // 0x19a340: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A344u;
        goto label_19a344;
    }
    ctx->pc = 0x19A33Cu;
    {
        const bool branch_taken_0x19a33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A33Cu;
        // 0x19a340: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a33c) {
            ctx->pc = 0x19A390u;
            goto label_19a390;
        }
    }
    ctx->pc = 0x19A344u;
label_19a344:
    // 0x19a344: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x19a344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_19a348:
    // 0x19a348: 0x10000006  b           . + 4 + (0x6 << 2)
label_19a34c:
    if (ctx->pc == 0x19A34Cu) {
        ctx->pc = 0x19A34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A348u;
        // 0x19a34c: 0x26250048  addiu       $a1, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A350u;
        goto label_19a350;
    }
    ctx->pc = 0x19A348u;
    {
        const bool branch_taken_0x19a348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A348u;
        // 0x19a34c: 0x26250048  addiu       $a1, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a348) {
            ctx->pc = 0x19A364u;
            goto label_19a364;
        }
    }
    ctx->pc = 0x19A350u;
label_19a350:
    // 0x19a350: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x19a350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_19a354:
    // 0x19a354: 0x10000003  b           . + 4 + (0x3 << 2)
label_19a358:
    if (ctx->pc == 0x19A358u) {
        ctx->pc = 0x19A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A354u;
        // 0x19a358: 0x26250050  addiu       $a1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A35Cu;
        goto label_19a35c;
    }
    ctx->pc = 0x19A354u;
    {
        const bool branch_taken_0x19a354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A354u;
        // 0x19a358: 0x26250050  addiu       $a1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a354) {
            ctx->pc = 0x19A364u;
            goto label_19a364;
        }
    }
    ctx->pc = 0x19A35Cu;
label_19a35c:
    // 0x19a35c: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x19a35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_19a360:
    // 0x19a360: 0x26250060  addiu       $a1, $s1, 0x60
    ctx->pc = 0x19a360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_19a364:
    // 0x19a364: 0xc07fcf4  jal         func_1FF3D0
label_19a368:
    if (ctx->pc == 0x19A368u) {
        ctx->pc = 0x19A368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A364u;
        // 0x19a368: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A36Cu;
        goto label_19a36c;
    }
    ctx->pc = 0x19A364u;
    SET_GPR_U32(ctx, 31, 0x19A36Cu);
    ctx->pc = 0x19A368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A364u;
    // 0x19a368: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x19A364u, 0x19A36Cu)) {
        return;
    }
    ctx->pc = 0x19A36Cu;
label_19a36c:
    // 0x19a36c: 0x10000007  b           . + 4 + (0x7 << 2)
label_19a370:
    if (ctx->pc == 0x19A370u) {
        ctx->pc = 0x19A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A36Cu;
        // 0x19a370: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A374u;
        goto label_19a374;
    }
    ctx->pc = 0x19A36Cu;
    {
        const bool branch_taken_0x19a36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A36Cu;
        // 0x19a370: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a36c) {
            ctx->pc = 0x19A38Cu;
            goto label_19a38c;
        }
    }
    ctx->pc = 0x19A374u;
label_19a374:
    // 0x19a374: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x19a374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_19a378:
    // 0x19a378: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x19a378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_19a37c:
    // 0x19a37c: 0x26250058  addiu       $a1, $s1, 0x58
    ctx->pc = 0x19a37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_19a380:
    // 0x19a380: 0xc07fcf4  jal         func_1FF3D0
label_19a384:
    if (ctx->pc == 0x19A384u) {
        ctx->pc = 0x19A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A380u;
        // 0x19a384: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A388u;
        goto label_19a388;
    }
    ctx->pc = 0x19A380u;
    SET_GPR_U32(ctx, 31, 0x19A388u);
    ctx->pc = 0x19A384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A380u;
    // 0x19a384: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x19A380u, 0x19A388u)) {
        return;
    }
    ctx->pc = 0x19A388u;
label_19a388:
    // 0x19a388: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19a388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_19a38c:
    // 0x19a38c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19a38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19a390:
    // 0x19a390: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19a390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19a394:
    // 0x19a394: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19a394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19a398:
    // 0x19a398: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19a398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19a39c:
    // 0x19a39c: 0xc07f0c8  jal         func_1FC320
label_19a3a0:
    if (ctx->pc == 0x19A3A0u) {
        ctx->pc = 0x19A3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A39Cu;
        // 0x19a3a0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A3A4u;
        goto label_19a3a4;
    }
    ctx->pc = 0x19A39Cu;
    SET_GPR_U32(ctx, 31, 0x19A3A4u);
    ctx->pc = 0x19A3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A39Cu;
    // 0x19a3a0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x19A39Cu, 0x19A3A4u)) {
        return;
    }
    ctx->pc = 0x19A3A4u;
label_19a3a4:
    // 0x19a3a4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19a3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_19a3a8:
    // 0x19a3a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19a3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19a3ac:
    // 0x19a3ac: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
label_19a3b0:
    if (ctx->pc == 0x19A3B0u) {
        ctx->pc = 0x19A3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A3ACu;
        // 0x19a3b0: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A3B4u;
        goto label_19a3b4;
    }
    ctx->pc = 0x19A3ACu;
    {
        const bool branch_taken_0x19a3ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A3ACu;
        // 0x19a3b0: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a3ac) {
            ctx->pc = 0x19A318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19a318;
        }
    }
    ctx->pc = 0x19A3B4u;
label_19a3b4:
    // 0x19a3b4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x19a3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_19a3b8:
    // 0x19a3b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19a3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19a3bc:
    // 0x19a3bc: 0x8c461a68  lw          $a2, 0x1A68($v0)
    ctx->pc = 0x19a3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6760)));
label_19a3c0:
    // 0x19a3c0: 0xc07f1c0  jal         func_1FC700
label_19a3c4:
    if (ctx->pc == 0x19A3C4u) {
        ctx->pc = 0x19A3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A3C0u;
        // 0x19a3c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A3C8u;
        goto label_19a3c8;
    }
    ctx->pc = 0x19A3C0u;
    SET_GPR_U32(ctx, 31, 0x19A3C8u);
    ctx->pc = 0x19A3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A3C0u;
    // 0x19a3c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x19A3C0u, 0x19A3C8u)) {
        return;
    }
    ctx->pc = 0x19A3C8u;
label_19a3c8:
    // 0x19a3c8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19a3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_19a3cc:
    // 0x19a3cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19a3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19a3d0:
    // 0x19a3d0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_19a3d4:
    if (ctx->pc == 0x19A3D4u) {
        ctx->pc = 0x19A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A3D0u;
        // 0x19a3d4: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A3D8u;
        goto label_19a3d8;
    }
    ctx->pc = 0x19A3D0u;
    {
        const bool branch_taken_0x19a3d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A3D0u;
        // 0x19a3d4: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a3d0) {
            ctx->pc = 0x19A460u;
            goto label_19a460;
        }
    }
    ctx->pc = 0x19A3D8u;
label_19a3d8:
    // 0x19a3d8: 0x3c13006a  lui         $s3, 0x6A
    ctx->pc = 0x19a3d8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)106 << 16));
label_19a3dc:
    // 0x19a3dc: 0x2452108c  addiu       $s2, $v0, 0x108C
    ctx->pc = 0x19a3dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
label_19a3e0:
    // 0x19a3e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19a3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_19a3e4:
    // 0x19a3e4: 0x0  nop
    ctx->pc = 0x19a3e4u;
    // NOP
label_19a3e8:
    // 0x19a3e8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x19a3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_19a3ec:
    // 0x19a3ec: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_19a3f0:
    if (ctx->pc == 0x19A3F0u) {
        ctx->pc = 0x19A3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A3ECu;
        // 0x19a3f0: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A3F4u;
        goto label_19a3f4;
    }
    ctx->pc = 0x19A3ECu;
    {
        const bool branch_taken_0x19a3ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A3ECu;
        // 0x19a3f0: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a3ec) {
            ctx->pc = 0x19A438u;
            goto label_19a438;
        }
    }
    ctx->pc = 0x19A3F4u;
label_19a3f4:
    // 0x19a3f4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x19a3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_19a3f8:
    // 0x19a3f8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x19a3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_19a3fc:
    // 0x19a3fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19a3fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19a400:
    // 0x19a400: 0xc08063c  jal         func_2018F0
label_19a404:
    if (ctx->pc == 0x19A404u) {
        ctx->pc = 0x19A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A400u;
        // 0x19a404: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A408u;
        goto label_19a408;
    }
    ctx->pc = 0x19A400u;
    SET_GPR_U32(ctx, 31, 0x19A408u);
    ctx->pc = 0x19A404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A400u;
    // 0x19a404: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2018F0u, 0x19A400u, 0x19A408u)) {
        return;
    }
    ctx->pc = 0x19A408u;
label_19a408:
    // 0x19a408: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x19a408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_19a40c:
    // 0x19a40c: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_19a410:
    if (ctx->pc == 0x19A410u) {
        ctx->pc = 0x19A410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A40Cu;
        // 0x19a410: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A414u;
        goto label_19a414;
    }
    ctx->pc = 0x19A40Cu;
    {
        const bool branch_taken_0x19a40c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A40Cu;
        // 0x19a410: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a40c) {
            ctx->pc = 0x19A434u;
            goto label_19a434;
        }
    }
    ctx->pc = 0x19A414u;
label_19a414:
    // 0x19a414: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x19a414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_19a418:
    // 0x19a418: 0x40f809  jalr        $v0
label_19a41c:
    if (ctx->pc == 0x19A41Cu) {
        ctx->pc = 0x19A41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A418u;
        // 0x19a41c: 0x26649ee0  addiu       $a0, $s3, -0x6120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294942432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A420u;
        goto label_19a420;
    }
    ctx->pc = 0x19A418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19A420u);
        ctx->pc = 0x19A41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A418u;
        // 0x19a41c: 0x26649ee0  addiu       $a0, $s3, -0x6120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294942432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A418u, 0x19A420u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19A420u;
label_19a420:
    // 0x19a420: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_19a424:
    if (ctx->pc == 0x19A424u) {
        ctx->pc = 0x19A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A420u;
        // 0x19a424: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A428u;
        goto label_19a428;
    }
    ctx->pc = 0x19A420u;
    {
        const bool branch_taken_0x19a420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A420u;
        // 0x19a424: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a420) {
            ctx->pc = 0x19A438u;
            goto label_19a438;
        }
    }
    ctx->pc = 0x19A428u;
label_19a428:
    // 0x19a428: 0xc0765ca  jal         func_1D9728
label_19a42c:
    if (ctx->pc == 0x19A42Cu) {
        ctx->pc = 0x19A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A428u;
        // 0x19a42c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A430u;
        goto label_19a430;
    }
    ctx->pc = 0x19A428u;
    SET_GPR_U32(ctx, 31, 0x19A430u);
    ctx->pc = 0x19A42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A428u;
    // 0x19a42c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9728u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9728u, 0x19A428u, 0x19A430u)) {
        return;
    }
    ctx->pc = 0x19A430u;
label_19a430:
    // 0x19a430: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x19a430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
label_19a434:
    // 0x19a434: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19a434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_19a438:
    // 0x19a438: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x19a438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_19a43c:
    // 0x19a43c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19a43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19a440:
    // 0x19a440: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19a440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19a444:
    // 0x19a444: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19a444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19a448:
    // 0x19a448: 0xc07f0c8  jal         func_1FC320
label_19a44c:
    if (ctx->pc == 0x19A44Cu) {
        ctx->pc = 0x19A44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A448u;
        // 0x19a44c: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A450u;
        goto label_19a450;
    }
    ctx->pc = 0x19A448u;
    SET_GPR_U32(ctx, 31, 0x19A450u);
    ctx->pc = 0x19A44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A448u;
    // 0x19a44c: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x19A448u, 0x19A450u)) {
        return;
    }
    ctx->pc = 0x19A450u;
label_19a450:
    // 0x19a450: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19a450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_19a454:
    // 0x19a454: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19a454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19a458:
    // 0x19a458: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
label_19a45c:
    if (ctx->pc == 0x19A45Cu) {
        ctx->pc = 0x19A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A458u;
        // 0x19a45c: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A460u;
        goto label_19a460;
    }
    ctx->pc = 0x19A458u;
    {
        const bool branch_taken_0x19a458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A458u;
        // 0x19a45c: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a458) {
            ctx->pc = 0x19A3E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19a3e8;
        }
    }
    ctx->pc = 0x19A460u;
label_19a460:
    // 0x19a460: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x19a460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_19a464:
    // 0x19a464: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x19a464u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_19a468:
    // 0x19a468: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x19a468u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_19a46c:
    // 0x19a46c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x19a46cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_19a470:
    // 0x19a470: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x19a470u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_19a474:
    // 0x19a474: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x19a474u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19a478:
    // 0x19a478: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19a478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19a47c:
    // 0x19a47c: 0x3e00008  jr          $ra
label_19a480:
    if (ctx->pc == 0x19A480u) {
        ctx->pc = 0x19A480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A47Cu;
        // 0x19a480: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A484u;
        goto label_19a484;
    }
    ctx->pc = 0x19A47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A47Cu;
        // 0x19a480: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A47Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A484u;
label_19a484:
    // 0x19a484: 0x0  nop
    ctx->pc = 0x19a484u;
    // NOP
    ctx->pc = 0x19a488u;
}
