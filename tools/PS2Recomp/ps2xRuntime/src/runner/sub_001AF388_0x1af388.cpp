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

// Function: sub_001AF388
// Address: 0x1af388 - 0x1af418
void sub_001AF388_0x1af388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF388_0x1af388");
#endif

    switch (ctx->pc) {
        case 0x1af388u: goto label_1af388;
        case 0x1af38cu: goto label_1af38c;
        case 0x1af390u: goto label_1af390;
        case 0x1af394u: goto label_1af394;
        case 0x1af398u: goto label_1af398;
        case 0x1af39cu: goto label_1af39c;
        case 0x1af3a0u: goto label_1af3a0;
        case 0x1af3a4u: goto label_1af3a4;
        case 0x1af3a8u: goto label_1af3a8;
        case 0x1af3acu: goto label_1af3ac;
        case 0x1af3b0u: goto label_1af3b0;
        case 0x1af3b4u: goto label_1af3b4;
        case 0x1af3b8u: goto label_1af3b8;
        case 0x1af3bcu: goto label_1af3bc;
        case 0x1af3c0u: goto label_1af3c0;
        case 0x1af3c4u: goto label_1af3c4;
        case 0x1af3c8u: goto label_1af3c8;
        case 0x1af3ccu: goto label_1af3cc;
        case 0x1af3d0u: goto label_1af3d0;
        case 0x1af3d4u: goto label_1af3d4;
        case 0x1af3d8u: goto label_1af3d8;
        case 0x1af3dcu: goto label_1af3dc;
        case 0x1af3e0u: goto label_1af3e0;
        case 0x1af3e4u: goto label_1af3e4;
        case 0x1af3e8u: goto label_1af3e8;
        case 0x1af3ecu: goto label_1af3ec;
        case 0x1af3f0u: goto label_1af3f0;
        case 0x1af3f4u: goto label_1af3f4;
        case 0x1af3f8u: goto label_1af3f8;
        case 0x1af3fcu: goto label_1af3fc;
        case 0x1af400u: goto label_1af400;
        case 0x1af404u: goto label_1af404;
        case 0x1af408u: goto label_1af408;
        case 0x1af40cu: goto label_1af40c;
        case 0x1af410u: goto label_1af410;
        case 0x1af414u: goto label_1af414;
        default: break;
    }

    ctx->pc = 0x1af388u;

label_1af388:
    // 0x1af388: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1af388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1af38c:
    // 0x1af38c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1af38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1af390:
    // 0x1af390: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1af394:
    // 0x1af394: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1af394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1af398:
    // 0x1af398: 0x8c910034  lw          $s1, 0x34($a0)
    ctx->pc = 0x1af398u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_1af39c:
    // 0x1af39c: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
label_1af3a0:
    if (ctx->pc == 0x1AF3A0u) {
        ctx->pc = 0x1AF3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF39Cu;
        // 0x1af3a0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF3A4u;
        goto label_1af3a4;
    }
    ctx->pc = 0x1AF39Cu;
    {
        const bool branch_taken_0x1af39c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF39Cu;
        // 0x1af3a0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af39c) {
            ctx->pc = 0x1AF404u;
            goto label_1af404;
        }
    }
    ctx->pc = 0x1AF3A4u;
label_1af3a4:
    // 0x1af3a4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1af3a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1af3a8:
    // 0x1af3a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af3a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af3ac:
    // 0x1af3ac: 0x8e020258  lw          $v0, 0x258($s0)
    ctx->pc = 0x1af3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
label_1af3b0:
    // 0x1af3b0: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1af3b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1af3b4:
    // 0x1af3b4: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1af3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1af3b8:
    // 0x1af3b8: 0x60f809  jalr        $v1
label_1af3bc:
    if (ctx->pc == 0x1AF3BCu) {
        ctx->pc = 0x1AF3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF3B8u;
        // 0x1af3bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF3C0u;
        goto label_1af3c0;
    }
    ctx->pc = 0x1AF3B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AF3C0u);
        ctx->pc = 0x1AF3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF3B8u;
        // 0x1af3bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF3B8u, 0x1AF3C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF3C0u;
label_1af3c0:
    // 0x1af3c0: 0x8e020258  lw          $v0, 0x258($s0)
    ctx->pc = 0x1af3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
label_1af3c4:
    // 0x1af3c4: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x1af3c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
label_1af3c8:
    // 0x1af3c8: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x1af3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_1af3cc:
    // 0x1af3cc: 0x60f809  jalr        $v1
label_1af3d0:
    if (ctx->pc == 0x1AF3D0u) {
        ctx->pc = 0x1AF3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF3CCu;
        // 0x1af3d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF3D4u;
        goto label_1af3d4;
    }
    ctx->pc = 0x1AF3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AF3D4u);
        ctx->pc = 0x1AF3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF3CCu;
        // 0x1af3d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF3CCu, 0x1AF3D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF3D4u;
label_1af3d4:
    // 0x1af3d4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1af3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1af3d8:
    // 0x1af3d8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1af3dc:
    if (ctx->pc == 0x1AF3DCu) {
        ctx->pc = 0x1AF3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF3D8u;
        // 0x1af3dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF3E0u;
        goto label_1af3e0;
    }
    ctx->pc = 0x1AF3D8u;
    {
        const bool branch_taken_0x1af3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF3D8u;
        // 0x1af3dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af3d8) {
            ctx->pc = 0x1AF3F4u;
            goto label_1af3f4;
        }
    }
    ctx->pc = 0x1AF3E0u;
label_1af3e0:
    // 0x1af3e0: 0x8e020258  lw          $v0, 0x258($s0)
    ctx->pc = 0x1af3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
label_1af3e4:
    // 0x1af3e4: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1af3e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1af3e8:
    // 0x1af3e8: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1af3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1af3ec:
    // 0x1af3ec: 0x60f809  jalr        $v1
label_1af3f0:
    if (ctx->pc == 0x1AF3F0u) {
        ctx->pc = 0x1AF3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF3ECu;
        // 0x1af3f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF3F4u;
        goto label_1af3f4;
    }
    ctx->pc = 0x1AF3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AF3F4u);
        ctx->pc = 0x1AF3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF3ECu;
        // 0x1af3f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF3ECu, 0x1AF3F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF3F4u;
label_1af3f4:
    // 0x1af3f4: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x1af3f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1af3f8:
    // 0x1af3f8: 0x5620ffeb  bnel        $s1, $zero, . + 4 + (-0x15 << 2)
label_1af3fc:
    if (ctx->pc == 0x1AF3FCu) {
        ctx->pc = 0x1AF3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF3F8u;
        // 0x1af3fc: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF400u;
        goto label_1af400;
    }
    ctx->pc = 0x1AF3F8u;
    {
        const bool branch_taken_0x1af3f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af3f8) {
            ctx->pc = 0x1AF3FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF3F8u;
            // 0x1af3fc: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af3a8;
        }
    }
    ctx->pc = 0x1AF400u;
label_1af400:
    // 0x1af400: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1af400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1af404:
    // 0x1af404: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1af404u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1af408:
    // 0x1af408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1af40c:
    // 0x1af40c: 0x3e00008  jr          $ra
label_1af410:
    if (ctx->pc == 0x1AF410u) {
        ctx->pc = 0x1AF410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF40Cu;
        // 0x1af410: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF414u;
        goto label_1af414;
    }
    ctx->pc = 0x1AF40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF40Cu;
        // 0x1af410: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF414u;
label_1af414:
    // 0x1af414: 0x0  nop
    ctx->pc = 0x1af414u;
    // NOP
    ctx->pc = 0x1af418u;
}
