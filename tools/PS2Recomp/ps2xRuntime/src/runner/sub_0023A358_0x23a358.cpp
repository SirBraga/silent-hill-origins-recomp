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

// Function: sub_0023A358
// Address: 0x23a358 - 0x23a490
void sub_0023A358_0x23a358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A358_0x23a358");
#endif

    switch (ctx->pc) {
        case 0x23a38cu: goto label_23a38c;
        case 0x23a39cu: goto label_23a39c;
        case 0x23a3b0u: goto label_23a3b0;
        case 0x23a3c0u: goto label_23a3c0;
        case 0x23a3d0u: goto label_23a3d0;
        case 0x23a3e4u: goto label_23a3e4;
        case 0x23a3f4u: goto label_23a3f4;
        case 0x23a404u: goto label_23a404;
        case 0x23a414u: goto label_23a414;
        case 0x23a424u: goto label_23a424;
        case 0x23a434u: goto label_23a434;
        case 0x23a444u: goto label_23a444;
        case 0x23a454u: goto label_23a454;
        case 0x23a464u: goto label_23a464;
        case 0x23a474u: goto label_23a474;
        case 0x23a488u: goto label_23a488;
        default: break;
    }

    ctx->pc = 0x23a358u;

    // 0x23a358: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23a358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23a35c: 0x2c820017  sltiu       $v0, $a0, 0x17
    ctx->pc = 0x23a35cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x23a360: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x23A360u;
    {
        const bool branch_taken_0x23a360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A360u;
        // 0x23a364: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a360) {
            ctx->pc = 0x23A4A0u;
            return;
        }
    }
    ctx->pc = 0x23A368u;
    // 0x23a368: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23a368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x23a36c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x23a36cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23a370: 0x2442b0c0  addiu       $v0, $v0, -0x4F40
    ctx->pc = 0x23a370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947008));
    // 0x23a374: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23a374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23a378: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23a378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23a37c: 0x800008  jr          $a0
    ctx->pc = 0x23A37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23A384u: goto label_23a384;
            case 0x23A394u: goto label_23a394;
            case 0x23A3A4u: goto label_23a3a4;
            case 0x23A3B8u: goto label_23a3b8;
            case 0x23A3C8u: goto label_23a3c8;
            case 0x23A3D8u: goto label_23a3d8;
            case 0x23A3ECu: goto label_23a3ec;
            case 0x23A3FCu: goto label_23a3fc;
            case 0x23A40Cu: goto label_23a40c;
            case 0x23A41Cu: goto label_23a41c;
            case 0x23A42Cu: goto label_23a42c;
            case 0x23A43Cu: goto label_23a43c;
            case 0x23A44Cu: goto label_23a44c;
            case 0x23A45Cu: goto label_23a45c;
            case 0x23A46Cu: goto label_23a46c;
            case 0x23A47Cu: goto label_23a47c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A37Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23A384u;
label_23a384:
    // 0x23a384: 0xc08e0e4  jal         func_238390
    ctx->pc = 0x23A384u;
    SET_GPR_U32(ctx, 31, 0x23A38Cu);
    ctx->pc = 0x23A388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A384u;
    // 0x23a388: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x238390u, 0x23A384u, 0x23A38Cu)) {
        return;
    }
    ctx->pc = 0x23A38Cu;
label_23a38c:
    // 0x23a38c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x23A38Cu;
    {
        const bool branch_taken_0x23a38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A38Cu;
        // 0x23a390: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a38c) {
            ctx->pc = 0x23A4A4u;
            return;
        }
    }
    ctx->pc = 0x23A394u;
label_23a394:
    // 0x23a394: 0xc08e134  jal         func_2384D0
    ctx->pc = 0x23A394u;
    SET_GPR_U32(ctx, 31, 0x23A39Cu);
    ctx->pc = 0x23A398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A394u;
    // 0x23a398: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2384D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2384D0u, 0x23A394u, 0x23A39Cu)) {
        return;
    }
    ctx->pc = 0x23A39Cu;
label_23a39c:
    // 0x23a39c: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x23A39Cu;
    {
        const bool branch_taken_0x23a39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A39Cu;
        // 0x23a3a0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a39c) {
            ctx->pc = 0x23A4A4u;
            return;
        }
    }
    ctx->pc = 0x23A3A4u;
label_23a3a4:
    // 0x23a3a4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x23a3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a3a8: 0xc08e138  jal         func_2384E0
    ctx->pc = 0x23A3A8u;
    SET_GPR_U32(ctx, 31, 0x23A3B0u);
    ctx->pc = 0x23A3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A3A8u;
    // 0x23a3ac: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2384E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2384E0u, 0x23A3A8u, 0x23A3B0u)) {
        return;
    }
    ctx->pc = 0x23A3B0u;
label_23a3b0:
    // 0x23a3b0: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x23A3B0u;
    {
        const bool branch_taken_0x23a3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A3B0u;
        // 0x23a3b4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a3b0) {
            ctx->pc = 0x23A4A4u;
            return;
        }
    }
    ctx->pc = 0x23A3B8u;
label_23a3b8:
    // 0x23a3b8: 0xc08e160  jal         func_238580
    ctx->pc = 0x23A3B8u;
    SET_GPR_U32(ctx, 31, 0x23A3C0u);
    ctx->pc = 0x23A3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A3B8u;
    // 0x23a3bc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238580u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x238580u, 0x23A3B8u, 0x23A3C0u)) {
        return;
    }
    ctx->pc = 0x23A3C0u;
label_23a3c0:
    // 0x23a3c0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x23A3C0u;
    {
        const bool branch_taken_0x23a3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A3C0u;
        // 0x23a3c4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a3c0) {
            ctx->pc = 0x23A4A4u;
            return;
        }
    }
    ctx->pc = 0x23A3C8u;
label_23a3c8:
    // 0x23a3c8: 0xc08e166  jal         func_238598
    ctx->pc = 0x23A3C8u;
    SET_GPR_U32(ctx, 31, 0x23A3D0u);
    ctx->pc = 0x238598u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x238598u, 0x23A3C8u, 0x23A3D0u)) {
        return;
    }
    ctx->pc = 0x23A3D0u;
label_23a3d0:
    // 0x23a3d0: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x23A3D0u;
    {
        const bool branch_taken_0x23a3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A3D0u;
        // 0x23a3d4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a3d0) {
            ctx->pc = 0x23A4A4u;
            return;
        }
    }
    ctx->pc = 0x23A3D8u;
label_23a3d8:
    // 0x23a3d8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x23a3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a3dc: 0xc08e19a  jal         func_238668
    ctx->pc = 0x23A3DCu;
    SET_GPR_U32(ctx, 31, 0x23A3E4u);
    ctx->pc = 0x23A3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A3DCu;
    // 0x23a3e0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x238668u, 0x23A3DCu, 0x23A3E4u)) {
        return;
    }
    ctx->pc = 0x23A3E4u;
label_23a3e4:
    // 0x23a3e4: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x23A3E4u;
    {
        const bool branch_taken_0x23a3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A3E4u;
        // 0x23a3e8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a3e4) {
            ctx->pc = 0x23A4A4u;
            return;
        }
    }
    ctx->pc = 0x23A3ECu;
label_23a3ec:
    // 0x23a3ec: 0xc08e1c6  jal         func_238718
    ctx->pc = 0x23A3ECu;
    SET_GPR_U32(ctx, 31, 0x23A3F4u);
    ctx->pc = 0x238718u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x238718u, 0x23A3ECu, 0x23A3F4u)) {
        return;
    }
    ctx->pc = 0x23A3F4u;
label_23a3f4:
    // 0x23a3f4: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x23A3F4u;
    {
        const bool branch_taken_0x23a3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A3F4u;
        // 0x23a3f8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a3f4) {
            ctx->pc = 0x23A4A4u;
            return;
        }
    }
    ctx->pc = 0x23A3FCu;
label_23a3fc:
    // 0x23a3fc: 0xc08e2a2  jal         func_238A88
    ctx->pc = 0x23A3FCu;
    SET_GPR_U32(ctx, 31, 0x23A404u);
    ctx->pc = 0x238A88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x238A88u, 0x23A3FCu, 0x23A404u)) {
        return;
    }
    ctx->pc = 0x23A404u;
label_23a404:
    // 0x23a404: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x23A404u;
    {
        const bool branch_taken_0x23a404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A404u;
        // 0x23a408: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a404) {
            ctx->pc = 0x23A4A4u;
            return;
        }
    }
    ctx->pc = 0x23A40Cu;
label_23a40c:
    // 0x23a40c: 0xc08e58a  jal         func_239628
    ctx->pc = 0x23A40Cu;
    SET_GPR_U32(ctx, 31, 0x23A414u);
    ctx->pc = 0x239628u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x239628u, 0x23A40Cu, 0x23A414u)) {
        return;
    }
    ctx->pc = 0x23A414u;
label_23a414:
    // 0x23a414: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x23A414u;
    {
        const bool branch_taken_0x23a414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A414u;
        // 0x23a418: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a414) {
            ctx->pc = 0x23A4A4u;
            return;
        }
    }
    ctx->pc = 0x23A41Cu;
label_23a41c:
    // 0x23a41c: 0xc08e2a4  jal         func_238A90
    ctx->pc = 0x23A41Cu;
    SET_GPR_U32(ctx, 31, 0x23A424u);
    ctx->pc = 0x238A90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x238A90u, 0x23A41Cu, 0x23A424u)) {
        return;
    }
    ctx->pc = 0x23A424u;
label_23a424:
    // 0x23a424: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x23A424u;
    {
        const bool branch_taken_0x23a424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A424u;
        // 0x23a428: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a424) {
            ctx->pc = 0x23A4A4u;
            return;
        }
    }
    ctx->pc = 0x23A42Cu;
label_23a42c:
    // 0x23a42c: 0xc08e2b8  jal         func_238AE0
    ctx->pc = 0x23A42Cu;
    SET_GPR_U32(ctx, 31, 0x23A434u);
    ctx->pc = 0x238AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x238AE0u, 0x23A42Cu, 0x23A434u)) {
        return;
    }
    ctx->pc = 0x23A434u;
label_23a434:
    // 0x23a434: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x23A434u;
    {
        const bool branch_taken_0x23a434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A434u;
        // 0x23a438: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a434) {
            ctx->pc = 0x23A4A4u;
            return;
        }
    }
    ctx->pc = 0x23A43Cu;
label_23a43c:
    // 0x23a43c: 0xc08e2f4  jal         func_238BD0
    ctx->pc = 0x23A43Cu;
    SET_GPR_U32(ctx, 31, 0x23A444u);
    ctx->pc = 0x238BD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x238BD0u, 0x23A43Cu, 0x23A444u)) {
        return;
    }
    ctx->pc = 0x23A444u;
label_23a444:
    // 0x23a444: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x23A444u;
    {
        const bool branch_taken_0x23a444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A444u;
        // 0x23a448: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a444) {
            ctx->pc = 0x23A4A4u;
            return;
        }
    }
    ctx->pc = 0x23A44Cu;
label_23a44c:
    // 0x23a44c: 0xc08e300  jal         func_238C00
    ctx->pc = 0x23A44Cu;
    SET_GPR_U32(ctx, 31, 0x23A454u);
    ctx->pc = 0x23A450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A44Cu;
    // 0x23a450: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238C00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x238C00u, 0x23A44Cu, 0x23A454u)) {
        return;
    }
    ctx->pc = 0x23A454u;
label_23a454:
    // 0x23a454: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x23A454u;
    {
        const bool branch_taken_0x23a454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A454u;
        // 0x23a458: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a454) {
            ctx->pc = 0x23A4A4u;
            return;
        }
    }
    ctx->pc = 0x23A45Cu;
label_23a45c:
    // 0x23a45c: 0xc08e304  jal         func_238C10
    ctx->pc = 0x23A45Cu;
    SET_GPR_U32(ctx, 31, 0x23A464u);
    ctx->pc = 0x23A460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A45Cu;
    // 0x23a460: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238C10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x238C10u, 0x23A45Cu, 0x23A464u)) {
        return;
    }
    ctx->pc = 0x23A464u;
label_23a464:
    // 0x23a464: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x23A464u;
    {
        const bool branch_taken_0x23a464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A464u;
        // 0x23a468: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a464) {
            ctx->pc = 0x23A4A4u;
            return;
        }
    }
    ctx->pc = 0x23A46Cu;
label_23a46c:
    // 0x23a46c: 0xc08e30e  jal         func_238C38
    ctx->pc = 0x23A46Cu;
    SET_GPR_U32(ctx, 31, 0x23A474u);
    ctx->pc = 0x238C38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x238C38u, 0x23A46Cu, 0x23A474u)) {
        return;
    }
    ctx->pc = 0x23A474u;
label_23a474:
    // 0x23a474: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x23A474u;
    {
        const bool branch_taken_0x23a474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A474u;
        // 0x23a478: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a474) {
            ctx->pc = 0x23A4A4u;
            return;
        }
    }
    ctx->pc = 0x23A47Cu;
label_23a47c:
    // 0x23a47c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x23a47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a480: 0xc08e310  jal         func_238C40
    ctx->pc = 0x23A480u;
    SET_GPR_U32(ctx, 31, 0x23A488u);
    ctx->pc = 0x23A484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A480u;
    // 0x23a484: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x238C40u, 0x23A480u, 0x23A488u)) {
        return;
    }
    ctx->pc = 0x23A488u;
label_23a488:
    // 0x23a488: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23A488u;
    {
        const bool branch_taken_0x23a488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A488u;
        // 0x23a48c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a488) {
            ctx->pc = 0x23A4A4u;
            return;
        }
    }
    ctx->pc = 0x23A490u;
}
