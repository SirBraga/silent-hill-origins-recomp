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

// Function: sub_0013A328
// Address: 0x13a328 - 0x13a448
void sub_0013A328_0x13a328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A328_0x13a328");
#endif

    switch (ctx->pc) {
        case 0x13a378u: goto label_13a378;
        case 0x13a390u: goto label_13a390;
        case 0x13a3a0u: goto label_13a3a0;
        case 0x13a3a8u: goto label_13a3a8;
        case 0x13a3b4u: goto label_13a3b4;
        case 0x13a3c0u: goto label_13a3c0;
        case 0x13a3c8u: goto label_13a3c8;
        case 0x13a3dcu: goto label_13a3dc;
        case 0x13a3e8u: goto label_13a3e8;
        case 0x13a3f4u: goto label_13a3f4;
        case 0x13a40cu: goto label_13a40c;
        case 0x13a414u: goto label_13a414;
        default: break;
    }

    ctx->pc = 0x13a328u;

    // 0x13a328: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x13a328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x13a32c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x13a32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x13a330: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13a330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13a334: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x13a334u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a338: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x13a338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x13a33c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x13a33cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a340: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x13a340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x13a344: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x13a344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x13a348: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x13a348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x13a34c: 0x12400034  beqz        $s2, . + 4 + (0x34 << 2)
    ctx->pc = 0x13A34Cu;
    {
        const bool branch_taken_0x13a34c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A34Cu;
        // 0x13a350: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a34c) {
            ctx->pc = 0x13A420u;
            goto label_13a420;
        }
    }
    ctx->pc = 0x13A354u;
    // 0x13a354: 0x8e630044  lw          $v1, 0x44($s3)
    ctx->pc = 0x13a354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x13a358: 0x28620020  slti        $v0, $v1, 0x20
    ctx->pc = 0x13a358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x13a35c: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x13A35Cu;
    {
        const bool branch_taken_0x13a35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A35Cu;
        // 0x13a360: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a35c) {
            ctx->pc = 0x13A420u;
            goto label_13a420;
        }
    }
    ctx->pc = 0x13A364u;
    // 0x13a364: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13a364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a368: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x13a368u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x13a36c: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x13a36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x13a370: 0xc095596  jal         func_255658
    ctx->pc = 0x13A370u;
    SET_GPR_U32(ctx, 31, 0x13A378u);
    ctx->pc = 0x13A374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A370u;
    // 0x13a374: 0x2628821  addu        $s1, $s3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255658u, 0x13A370u, 0x13A378u)) {
        return;
    }
    ctx->pc = 0x13A378u;
label_13a378:
    // 0x13a378: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13a378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a37c: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x13a37cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x13a380: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13A380u;
    {
        const bool branch_taken_0x13a380 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A380u;
        // 0x13a384: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a380) {
            ctx->pc = 0x13A3A0u;
            goto label_13a3a0;
        }
    }
    ctx->pc = 0x13A388u;
    // 0x13a388: 0xc0979f6  jal         func_25E7D8
    ctx->pc = 0x13A388u;
    SET_GPR_U32(ctx, 31, 0x13A390u);
    ctx->pc = 0x13A38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A388u;
    // 0x13a38c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E7D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E7D8u, 0x13A388u, 0x13A390u)) {
        return;
    }
    ctx->pc = 0x13A390u;
label_13a390:
    // 0x13a390: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A390u;
    {
        const bool branch_taken_0x13a390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A390u;
        // 0x13a394: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a390) {
            ctx->pc = 0x13A3A0u;
            goto label_13a3a0;
        }
    }
    ctx->pc = 0x13A398u;
    // 0x13a398: 0xc09799a  jal         func_25E668
    ctx->pc = 0x13A398u;
    SET_GPR_U32(ctx, 31, 0x13A3A0u);
    ctx->pc = 0x13A39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A398u;
    // 0x13a39c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E668u, 0x13A398u, 0x13A3A0u)) {
        return;
    }
    ctx->pc = 0x13A3A0u;
label_13a3a0:
    // 0x13a3a0: 0xc081be4  jal         func_206F90
    ctx->pc = 0x13A3A0u;
    SET_GPR_U32(ctx, 31, 0x13A3A8u);
    ctx->pc = 0x13A3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A3A0u;
    // 0x13a3a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206F90u, 0x13A3A0u, 0x13A3A8u)) {
        return;
    }
    ctx->pc = 0x13A3A8u;
label_13a3a8:
    // 0x13a3a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x13a3a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a3ac: 0xc081be4  jal         func_206F90
    ctx->pc = 0x13A3ACu;
    SET_GPR_U32(ctx, 31, 0x13A3B4u);
    ctx->pc = 0x13A3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A3ACu;
    // 0x13a3b0: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206F90u, 0x13A3ACu, 0x13A3B4u)) {
        return;
    }
    ctx->pc = 0x13A3B4u;
label_13a3b4:
    // 0x13a3b4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x13a3b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a3b8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x13A3B8u;
    {
        const bool branch_taken_0x13a3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A3B8u;
        // 0x13a3bc: 0x3c150014  lui         $s5, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)20 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a3b8) {
            ctx->pc = 0x13A3E8u;
            goto label_13a3e8;
        }
    }
    ctx->pc = 0x13A3C0u;
label_13a3c0:
    // 0x13a3c0: 0xc0a0b74  jal         func_282DD0
    ctx->pc = 0x13A3C0u;
    SET_GPR_U32(ctx, 31, 0x13A3C8u);
    ctx->pc = 0x13A3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A3C0u;
    // 0x13a3c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282DD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x282DD0u, 0x13A3C0u, 0x13A3C8u)) {
        return;
    }
    ctx->pc = 0x13A3C8u;
label_13a3c8:
    // 0x13a3c8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x13a3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13a3cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13a3ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a3d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13a3d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a3d4: 0xc081c0e  jal         func_207038
    ctx->pc = 0x13A3D4u;
    SET_GPR_U32(ctx, 31, 0x13A3DCu);
    ctx->pc = 0x13A3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A3D4u;
    // 0x13a3d8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207038u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x207038u, 0x13A3D4u, 0x13A3DCu)) {
        return;
    }
    ctx->pc = 0x13A3DCu;
label_13a3dc:
    // 0x13a3dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13a3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a3e0: 0xc0a0b6e  jal         func_282DB8
    ctx->pc = 0x13A3E0u;
    SET_GPR_U32(ctx, 31, 0x13A3E8u);
    ctx->pc = 0x13A3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A3E0u;
    // 0x13a3e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282DB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x282DB8u, 0x13A3E0u, 0x13A3E8u)) {
        return;
    }
    ctx->pc = 0x13A3E8u;
label_13a3e8:
    // 0x13a3e8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x13a3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13a3ec: 0xc081c0e  jal         func_207038
    ctx->pc = 0x13A3ECu;
    SET_GPR_U32(ctx, 31, 0x13A3F4u);
    ctx->pc = 0x13A3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A3ECu;
    // 0x13a3f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207038u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x207038u, 0x13A3ECu, 0x13A3F4u)) {
        return;
    }
    ctx->pc = 0x13A3F4u;
label_13a3f4:
    // 0x13a3f4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x13A3F4u;
    {
        const bool branch_taken_0x13a3f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a3f4) {
            ctx->pc = 0x13A3C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13a3c0;
        }
    }
    ctx->pc = 0x13A3FCu;
    // 0x13a3fc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x13a3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13a400: 0x26a5a5d8  addiu       $a1, $s5, -0x5A28
    ctx->pc = 0x13a400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294944216));
    // 0x13a404: 0xc09545a  jal         func_255168
    ctx->pc = 0x13A404u;
    SET_GPR_U32(ctx, 31, 0x13A40Cu);
    ctx->pc = 0x13A408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A404u;
    // 0x13a408: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x13A404u, 0x13A40Cu)) {
        return;
    }
    ctx->pc = 0x13A40Cu;
label_13a40c:
    // 0x13a40c: 0xc0940f4  jal         func_2503D0
    ctx->pc = 0x13A40Cu;
    SET_GPR_U32(ctx, 31, 0x13A414u);
    ctx->pc = 0x13A410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A40Cu;
    // 0x13a410: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2503D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2503D0u, 0x13A40Cu, 0x13A414u)) {
        return;
    }
    ctx->pc = 0x13A414u;
label_13a414:
    // 0x13a414: 0x8e630044  lw          $v1, 0x44($s3)
    ctx->pc = 0x13a414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x13a418: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13a418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13a41c: 0xae630044  sw          $v1, 0x44($s3)
    ctx->pc = 0x13a41cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 3));
label_13a420:
    // 0x13a420: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x13a420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13a424: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x13a424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13a428: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x13a428u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13a42c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13a42cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13a430: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x13a430u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a434: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x13a434u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a438: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13a438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a43c: 0x3e00008  jr          $ra
    ctx->pc = 0x13A43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A43Cu;
        // 0x13a440: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A444u;
    // 0x13a444: 0x0  nop
    ctx->pc = 0x13a444u;
    // NOP
    ctx->pc = 0x13a448u;
}
