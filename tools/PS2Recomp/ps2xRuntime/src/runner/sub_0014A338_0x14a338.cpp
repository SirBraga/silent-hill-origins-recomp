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

// Function: sub_0014A338
// Address: 0x14a338 - 0x14a420
void sub_0014A338_0x14a338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A338_0x14a338");
#endif

    switch (ctx->pc) {
        case 0x14a350u: goto label_14a350;
        case 0x14a370u: goto label_14a370;
        case 0x14a378u: goto label_14a378;
        case 0x14a380u: goto label_14a380;
        case 0x14a388u: goto label_14a388;
        case 0x14a3c0u: goto label_14a3c0;
        case 0x14a3d4u: goto label_14a3d4;
        case 0x14a3ecu: goto label_14a3ec;
        case 0x14a408u: goto label_14a408;
        default: break;
    }

    ctx->pc = 0x14a338u;

    // 0x14a338: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14a338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14a33c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x14a33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x14a340: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14a340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14a344: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14a344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14a348: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x14A348u;
    SET_GPR_U32(ctx, 31, 0x14A350u);
    ctx->pc = 0x14A34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A348u;
    // 0x14a34c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x14A348u, 0x14A350u)) {
        return;
    }
    ctx->pc = 0x14A350u;
label_14a350:
    // 0x14a350: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x14a350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x14a354: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x14a354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x14a358: 0x24631ab8  addiu       $v1, $v1, 0x1AB8
    ctx->pc = 0x14a358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6840));
    // 0x14a35c: 0x24421a70  addiu       $v0, $v0, 0x1A70
    ctx->pc = 0x14a35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6768));
    // 0x14a360: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x14a360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x14a364: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x14a364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x14a368: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x14A368u;
    SET_GPR_U32(ctx, 31, 0x14A370u);
    ctx->pc = 0x14A36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A368u;
    // 0x14a36c: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x14A368u, 0x14A370u)) {
        return;
    }
    ctx->pc = 0x14A370u;
label_14a370:
    // 0x14a370: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x14A370u;
    SET_GPR_U32(ctx, 31, 0x14A378u);
    ctx->pc = 0x14A374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A370u;
    // 0x14a374: 0x2604004c  addiu       $a0, $s0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x14A370u, 0x14A378u)) {
        return;
    }
    ctx->pc = 0x14A378u;
label_14a378:
    // 0x14a378: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x14A378u;
    SET_GPR_U32(ctx, 31, 0x14A380u);
    ctx->pc = 0x14A37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A378u;
    // 0x14a37c: 0x26040054  addiu       $a0, $s0, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x14A378u, 0x14A380u)) {
        return;
    }
    ctx->pc = 0x14A380u;
label_14a380:
    // 0x14a380: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x14A380u;
    SET_GPR_U32(ctx, 31, 0x14A388u);
    ctx->pc = 0x14A384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A380u;
    // 0x14a384: 0x2604005c  addiu       $a0, $s0, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x14A380u, 0x14A388u)) {
        return;
    }
    ctx->pc = 0x14A388u;
label_14a388:
    // 0x14a388: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x14a388u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    // 0x14a38c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14a38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a390: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14a390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14a394: 0x2631eea0  addiu       $s1, $s1, -0x1160
    ctx->pc = 0x14a394u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962848));
    // 0x14a398: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x14a398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x14a39c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x14a39cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x14a3a0: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x14a3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x14a3a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14a3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a3a8: 0xae03006c  sw          $v1, 0x6C($s0)
    ctx->pc = 0x14a3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
    // 0x14a3ac: 0x24a519f0  addiu       $a1, $a1, 0x19F0
    ctx->pc = 0x14a3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6640));
    // 0x14a3b0: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x14a3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x14a3b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14a3b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a3b8: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x14A3B8u;
    SET_GPR_U32(ctx, 31, 0x14A3C0u);
    ctx->pc = 0x14A3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A3B8u;
    // 0x14a3bc: 0xae030064  sw          $v1, 0x64($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x14A3B8u, 0x14A3C0u)) {
        return;
    }
    ctx->pc = 0x14A3C0u;
label_14a3c0:
    // 0x14a3c0: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x14a3c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x14a3c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14a3c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a3c8: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x14a3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x14a3cc: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x14A3CCu;
    SET_GPR_U32(ctx, 31, 0x14A3D4u);
    ctx->pc = 0x14A3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A3CCu;
    // 0x14a3d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x14A3CCu, 0x14A3D4u)) {
        return;
    }
    ctx->pc = 0x14A3D4u;
label_14a3d4:
    // 0x14a3d4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14a3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x14a3d8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x14a3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x14a3dc: 0x2484eea8  addiu       $a0, $a0, -0x1158
    ctx->pc = 0x14a3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962856));
    // 0x14a3e0: 0x24a51a08  addiu       $a1, $a1, 0x1A08
    ctx->pc = 0x14a3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6664));
    // 0x14a3e4: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x14A3E4u;
    SET_GPR_U32(ctx, 31, 0x14A3ECu);
    ctx->pc = 0x14A3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A3E4u;
    // 0x14a3e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x14A3E4u, 0x14A3ECu)) {
        return;
    }
    ctx->pc = 0x14A3ECu;
label_14a3ec:
    // 0x14a3ec: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14a3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x14a3f0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x14a3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x14a3f4: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x14a3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x14a3f8: 0x2484eeb0  addiu       $a0, $a0, -0x1150
    ctx->pc = 0x14a3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962864));
    // 0x14a3fc: 0x24a51a18  addiu       $a1, $a1, 0x1A18
    ctx->pc = 0x14a3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6680));
    // 0x14a400: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x14A400u;
    SET_GPR_U32(ctx, 31, 0x14A408u);
    ctx->pc = 0x14A404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A400u;
    // 0x14a404: 0x24c61a30  addiu       $a2, $a2, 0x1A30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x14A400u, 0x14A408u)) {
        return;
    }
    ctx->pc = 0x14A408u;
label_14a408:
    // 0x14a408: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14a408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a40c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14a40cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a410: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x14a410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a414: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14a414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a418: 0x3e00008  jr          $ra
    ctx->pc = 0x14A418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A418u;
        // 0x14a41c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A420u;
}
