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

// Function: sub_0019C338
// Address: 0x19c338 - 0x19c418
void sub_0019C338_0x19c338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C338_0x19c338");
#endif

    switch (ctx->pc) {
        case 0x19c3d4u: goto label_19c3d4;
        case 0x19c3dcu: goto label_19c3dc;
        case 0x19c3fcu: goto label_19c3fc;
        default: break;
    }

    ctx->pc = 0x19c338u;

    // 0x19c338: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19c338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19c33c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x19c33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x19c340: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19c340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19c344: 0x244232d0  addiu       $v0, $v0, 0x32D0
    ctx->pc = 0x19c344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13008));
    // 0x19c348: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c34c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19c34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19c350: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c354: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x19c354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x19c358: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x19c358u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x19c35c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x19c35cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x19c360: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x19c360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x19c364: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x19c364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x19c368: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x19c368u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x19c36c: 0x2484f7a8  addiu       $a0, $a0, -0x858
    ctx->pc = 0x19c36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965160));
    // 0x19c370: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x19c370u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x19c374: 0x26060024  addiu       $a2, $s0, 0x24
    ctx->pc = 0x19c374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x19c378: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x19c378u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x19c37c: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x19c37cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x19c380: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x19c380u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x19c384: 0x24e735d0  addiu       $a3, $a3, 0x35D0
    ctx->pc = 0x19c384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13776));
    // 0x19c388: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x19c388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x19c38c: 0x26110038  addiu       $s1, $s0, 0x38
    ctx->pc = 0x19c38cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x19c390: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x19c390u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x19c394: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x19c394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x19c398: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19c398u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x19c39c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19c39cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19c3a0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x19c3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x19c3a4: 0x2463a250  addiu       $v1, $v1, -0x5DB0
    ctx->pc = 0x19c3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943312));
    // 0x19c3a8: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x19c3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x19c3ac: 0x24a5a230  addiu       $a1, $a1, -0x5DD0
    ctx->pc = 0x19c3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943280));
    // 0x19c3b0: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x19c3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x19c3b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c3b8: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x19c3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x19c3bc: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x19c3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x19c3c0: 0xae270004  sw          $a3, 0x4($s1)
    ctx->pc = 0x19c3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 7));
    // 0x19c3c4: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x19c3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x19c3c8: 0xae05003c  sw          $a1, 0x3C($s0)
    ctx->pc = 0x19c3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 5));
    // 0x19c3cc: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x19C3CCu;
    SET_GPR_U32(ctx, 31, 0x19C3D4u);
    ctx->pc = 0x19C3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C3CCu;
    // 0x19c3d0: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x19C3CCu, 0x19C3D4u)) {
        return;
    }
    ctx->pc = 0x19C3D4u;
label_19c3d4:
    // 0x19c3d4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x19C3D4u;
    SET_GPR_U32(ctx, 31, 0x19C3DCu);
    ctx->pc = 0x19C3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C3D4u;
    // 0x19c3d8: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x19C3D4u, 0x19C3DCu)) {
        return;
    }
    ctx->pc = 0x19C3DCu;
label_19c3dc:
    // 0x19c3dc: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x19c3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x19c3e0: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x19c3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x19c3e4: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x19c3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x19c3e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c3ec: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x19c3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x19c3f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19c3f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c3f4: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x19C3F4u;
    SET_GPR_U32(ctx, 31, 0x19C3FCu);
    ctx->pc = 0x19C3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C3F4u;
    // 0x19c3f8: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x19C3F4u, 0x19C3FCu)) {
        return;
    }
    ctx->pc = 0x19C3FCu;
label_19c3fc:
    // 0x19c3fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19c3fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c400: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19c400u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c404: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19c404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c40c: 0x3e00008  jr          $ra
    ctx->pc = 0x19C40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C40Cu;
        // 0x19c410: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C414u;
    // 0x19c414: 0x0  nop
    ctx->pc = 0x19c414u;
    // NOP
    ctx->pc = 0x19c418u;
}
