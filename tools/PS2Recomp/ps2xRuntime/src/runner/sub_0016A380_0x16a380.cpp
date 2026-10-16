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

// Function: sub_0016A380
// Address: 0x16a380 - 0x16a470
void sub_0016A380_0x16a380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A380_0x16a380");
#endif

    switch (ctx->pc) {
        case 0x16a3a0u: goto label_16a3a0;
        case 0x16a3d0u: goto label_16a3d0;
        case 0x16a3e4u: goto label_16a3e4;
        case 0x16a3f8u: goto label_16a3f8;
        case 0x16a40cu: goto label_16a40c;
        case 0x16a420u: goto label_16a420;
        case 0x16a454u: goto label_16a454;
        default: break;
    }

    ctx->pc = 0x16a380u;

    // 0x16a380: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16a380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16a384: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16a384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16a388: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16a388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16a38c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16a38cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a390: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x16a390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x16a394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16a394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16a398: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x16A398u;
    SET_GPR_U32(ctx, 31, 0x16A3A0u);
    ctx->pc = 0x16A39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A398u;
    // 0x16a39c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x16A398u, 0x16A3A0u)) {
        return;
    }
    ctx->pc = 0x16A3A0u;
label_16a3a0:
    // 0x16a3a0: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x16a3a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16a3a4: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x16a3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x16a3a8: 0x5602002b  bnel        $s0, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x16A3A8u;
    {
        const bool branch_taken_0x16a3a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x16a3a8) {
            ctx->pc = 0x16A3ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A3A8u;
            // 0x16a3ac: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A458u;
            goto label_16a458;
        }
    }
    ctx->pc = 0x16A3B0u;
    // 0x16a3b0: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x16a3b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16a3b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a3b8: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16A3B8u;
    {
        const bool branch_taken_0x16a3b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A3B8u;
        // 0x16a3bc: 0x244544e8  addiu       $a1, $v0, 0x44E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a3b8) {
            ctx->pc = 0x16A3C4u;
            goto label_16a3c4;
        }
    }
    ctx->pc = 0x16A3C0u;
    // 0x16a3c0: 0x8e070014  lw          $a3, 0x14($s0)
    ctx->pc = 0x16a3c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_16a3c4:
    // 0x16a3c4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16a3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a3c8: 0xc05a47c  jal         func_1691F0
    ctx->pc = 0x16A3C8u;
    SET_GPR_U32(ctx, 31, 0x16A3D0u);
    ctx->pc = 0x16A3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A3C8u;
    // 0x16a3cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1691F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1691F0u, 0x16A3C8u, 0x16A3D0u)) {
        return;
    }
    ctx->pc = 0x16A3D0u;
label_16a3d0:
    // 0x16a3d0: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x16a3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x16a3d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16A3D4u;
    {
        const bool branch_taken_0x16a3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A3D4u;
        // 0x16a3d8: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a3d4) {
            ctx->pc = 0x16A3ECu;
            goto label_16a3ec;
        }
    }
    ctx->pc = 0x16A3DCu;
    // 0x16a3dc: 0xc05a91c  jal         func_16A470
    ctx->pc = 0x16A3DCu;
    SET_GPR_U32(ctx, 31, 0x16A3E4u);
    ctx->pc = 0x16A3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A3DCu;
    // 0x16a3e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16A470u, 0x16A3DCu, 0x16A3E4u)) {
        return;
    }
    ctx->pc = 0x16A3E4u;
label_16a3e4:
    // 0x16a3e4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x16A3E4u;
    {
        const bool branch_taken_0x16a3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A3E4u;
        // 0x16a3e8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a3e4) {
            ctx->pc = 0x16A458u;
            goto label_16a458;
        }
    }
    ctx->pc = 0x16A3ECu;
label_16a3ec:
    // 0x16a3ec: 0x8e320044  lw          $s2, 0x44($s1)
    ctx->pc = 0x16a3ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x16a3f0: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x16A3F0u;
    SET_GPR_U32(ctx, 31, 0x16A3F8u);
    ctx->pc = 0x16A3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A3F0u;
    // 0x16a3f4: 0x8c5086bc  lw          $s0, -0x7944($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936252)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x16A3F0u, 0x16A3F8u)) {
        return;
    }
    ctx->pc = 0x16A3F8u;
label_16a3f8:
    // 0x16a3f8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16A3F8u;
    {
        const bool branch_taken_0x16a3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A3F8u;
        // 0x16a3fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a3f8) {
            ctx->pc = 0x16A420u;
            goto label_16a420;
        }
    }
    ctx->pc = 0x16A400u;
    // 0x16a400: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16a400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a404: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x16A404u;
    SET_GPR_U32(ctx, 31, 0x16A40Cu);
    ctx->pc = 0x16A408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A404u;
    // 0x16a408: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x16A404u, 0x16A40Cu)) {
        return;
    }
    ctx->pc = 0x16A40Cu;
label_16a40c:
    // 0x16a40c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A40Cu;
    {
        const bool branch_taken_0x16a40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A40Cu;
        // 0x16a410: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a40c) {
            ctx->pc = 0x16A420u;
            goto label_16a420;
        }
    }
    ctx->pc = 0x16A414u;
    // 0x16a414: 0x8e260048  lw          $a2, 0x48($s1)
    ctx->pc = 0x16a414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x16a418: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x16A418u;
    SET_GPR_U32(ctx, 31, 0x16A420u);
    ctx->pc = 0x16A41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A418u;
    // 0x16a41c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x16A418u, 0x16A420u)) {
        return;
    }
    ctx->pc = 0x16A420u;
label_16a420:
    // 0x16a420: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16a420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x16a424: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x16a424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x16a428: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A428u;
    {
        const bool branch_taken_0x16a428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A428u;
        // 0x16a42c: 0x24454508  addiu       $a1, $v0, 0x4508 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a428) {
            ctx->pc = 0x16A43Cu;
            goto label_16a43c;
        }
    }
    ctx->pc = 0x16A430u;
    // 0x16a430: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16a430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x16a434: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16A434u;
    {
        const bool branch_taken_0x16a434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A434u;
        // 0x16a438: 0x24484528  addiu       $t0, $v0, 0x4528 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 17704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a434) {
            ctx->pc = 0x16A444u;
            goto label_16a444;
        }
    }
    ctx->pc = 0x16A43Cu;
label_16a43c:
    // 0x16a43c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16a43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x16a440: 0x24484530  addiu       $t0, $v0, 0x4530
    ctx->pc = 0x16a440u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 17712));
label_16a444:
    // 0x16a444: 0x8e270044  lw          $a3, 0x44($s1)
    ctx->pc = 0x16a444u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x16a448: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16a448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a44c: 0xc05a47c  jal         func_1691F0
    ctx->pc = 0x16A44Cu;
    SET_GPR_U32(ctx, 31, 0x16A454u);
    ctx->pc = 0x16A450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A44Cu;
    // 0x16a450: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1691F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1691F0u, 0x16A44Cu, 0x16A454u)) {
        return;
    }
    ctx->pc = 0x16A454u;
label_16a454:
    // 0x16a454: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16a454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16a458:
    // 0x16a458: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16a458u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a45c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x16a45cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a460: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16a460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a464: 0x3e00008  jr          $ra
    ctx->pc = 0x16A464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A464u;
        // 0x16a468: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A46Cu;
    // 0x16a46c: 0x0  nop
    ctx->pc = 0x16a46cu;
    // NOP
    ctx->pc = 0x16a470u;
}
