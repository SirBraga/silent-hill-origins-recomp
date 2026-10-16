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

// Function: sub_0013F368
// Address: 0x13f368 - 0x13f420
void sub_0013F368_0x13f368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F368_0x13f368");
#endif

    switch (ctx->pc) {
        case 0x13f380u: goto label_13f380;
        case 0x13f3d4u: goto label_13f3d4;
        case 0x13f3ecu: goto label_13f3ec;
        case 0x13f404u: goto label_13f404;
        default: break;
    }

    ctx->pc = 0x13f368u;

    // 0x13f368: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13f368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13f36c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13f36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13f370: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13f370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13f374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13f374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13f378: 0xc040000  jal         func_100000
    ctx->pc = 0x13F378u;
    SET_GPR_U32(ctx, 31, 0x13F380u);
    ctx->pc = 0x13F37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F378u;
    // 0x13f37c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100000u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x100000u, 0x13F378u, 0x13F380u)) {
        return;
    }
    ctx->pc = 0x13F380u;
label_13f380:
    // 0x13f380: 0x26110038  addiu       $s1, $s0, 0x38
    ctx->pc = 0x13f380u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x13f384: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x13f384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x13f388: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x13f388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x13f38c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x13f38cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x13f390: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x13f390u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x13f394: 0x24630248  addiu       $v1, $v1, 0x248
    ctx->pc = 0x13f394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 584));
    // 0x13f398: 0x24420128  addiu       $v0, $v0, 0x128
    ctx->pc = 0x13f398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 296));
    // 0x13f39c: 0x24a500e8  addiu       $a1, $a1, 0xE8
    ctx->pc = 0x13f39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 232));
    // 0x13f3a0: 0x24c60268  addiu       $a2, $a2, 0x268
    ctx->pc = 0x13f3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 616));
    // 0x13f3a4: 0xae000310  sw          $zero, 0x310($s0)
    ctx->pc = 0x13f3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 0));
    // 0x13f3a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13f3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f3ac: 0xae000320  sw          $zero, 0x320($s0)
    ctx->pc = 0x13f3acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 800), GPR_U32(ctx, 0));
    // 0x13f3b0: 0xae000324  sw          $zero, 0x324($s0)
    ctx->pc = 0x13f3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 804), GPR_U32(ctx, 0));
    // 0x13f3b4: 0xae000328  sw          $zero, 0x328($s0)
    ctx->pc = 0x13f3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 808), GPR_U32(ctx, 0));
    // 0x13f3b8: 0xae00032c  sw          $zero, 0x32C($s0)
    ctx->pc = 0x13f3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 0));
    // 0x13f3bc: 0xae000380  sw          $zero, 0x380($s0)
    ctx->pc = 0x13f3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 896), GPR_U32(ctx, 0));
    // 0x13f3c0: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x13f3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x13f3c4: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x13f3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x13f3c8: 0xae050084  sw          $a1, 0x84($s0)
    ctx->pc = 0x13f3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 5));
    // 0x13f3cc: 0xc04fb36  jal         func_13ECD8
    ctx->pc = 0x13F3CCu;
    SET_GPR_U32(ctx, 31, 0x13F3D4u);
    ctx->pc = 0x13F3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F3CCu;
    // 0x13f3d0: 0xae060034  sw          $a2, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13ECD8u, 0x13F3CCu, 0x13F3D4u)) {
        return;
    }
    ctx->pc = 0x13F3D4u;
label_13f3d4:
    // 0x13f3d4: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13f3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13f3d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13f3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f3dc: 0x24a5f880  addiu       $a1, $a1, -0x780
    ctx->pc = 0x13f3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965376));
    // 0x13f3e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13f3e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f3e4: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x13F3E4u;
    SET_GPR_U32(ctx, 31, 0x13F3ECu);
    ctx->pc = 0x13F3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F3E4u;
    // 0x13f3e8: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x13F3E4u, 0x13F3ECu)) {
        return;
    }
    ctx->pc = 0x13F3ECu;
label_13f3ec:
    // 0x13f3ec: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13f3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13f3f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13f3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f3f4: 0x24a5f888  addiu       $a1, $a1, -0x778
    ctx->pc = 0x13f3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965384));
    // 0x13f3f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13f3f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f3fc: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x13F3FCu;
    SET_GPR_U32(ctx, 31, 0x13F404u);
    ctx->pc = 0x13F400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F3FCu;
    // 0x13f400: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x13F3FCu, 0x13F404u)) {
        return;
    }
    ctx->pc = 0x13F404u;
label_13f404:
    // 0x13f404: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13f404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f408: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13f408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f40c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13f40cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13f410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13f410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f414: 0x3e00008  jr          $ra
    ctx->pc = 0x13F414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F414u;
        // 0x13f418: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F41Cu;
    // 0x13f41c: 0x0  nop
    ctx->pc = 0x13f41cu;
    // NOP
    ctx->pc = 0x13f420u;
}
