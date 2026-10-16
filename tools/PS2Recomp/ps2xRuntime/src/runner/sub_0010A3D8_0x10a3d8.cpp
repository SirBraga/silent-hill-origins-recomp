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

// Function: sub_0010A3D8
// Address: 0x10a3d8 - 0x10a4a8
void sub_0010A3D8_0x10a3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A3D8_0x10a3d8");
#endif

    switch (ctx->pc) {
        case 0x10a3f0u: goto label_10a3f0;
        default: break;
    }

    ctx->pc = 0x10a3d8u;

    // 0x10a3d8: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x10a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x10a3dc: 0x23943  sra         $a3, $v0, 5
    ctx->pc = 0x10a3dcu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 5));
    // 0x10a3e0: 0x18e00016  blez        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x10A3E0u;
    {
        const bool branch_taken_0x10a3e0 = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x10A3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A3E0u;
        // 0x10a3e4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a3e0) {
            ctx->pc = 0x10A43Cu;
            goto label_10a43c;
        }
    }
    ctx->pc = 0x10A3E8u;
    // 0x10a3e8: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x10a3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x10a3ec: 0x0  nop
    ctx->pc = 0x10a3ecu;
    // NOP
label_10a3f0:
    // 0x10a3f0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x10a3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x10a3f4: 0x10430028  beq         $v0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x10A3F4u;
    {
        const bool branch_taken_0x10a3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10a3f4) {
            ctx->pc = 0x10A498u;
            goto label_10a498;
        }
    }
    ctx->pc = 0x10A3FCu;
    // 0x10a3fc: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x10a3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x10a400: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x10a400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x10a404: 0x10430024  beq         $v0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x10A404u;
    {
        const bool branch_taken_0x10a404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10a404) {
            ctx->pc = 0x10A498u;
            goto label_10a498;
        }
    }
    ctx->pc = 0x10A40Cu;
    // 0x10a40c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x10a40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x10a410: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x10a410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x10a414: 0x10430020  beq         $v0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x10A414u;
    {
        const bool branch_taken_0x10a414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10a414) {
            ctx->pc = 0x10A498u;
            goto label_10a498;
        }
    }
    ctx->pc = 0x10A41Cu;
    // 0x10a41c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x10a41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x10a420: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x10a420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x10a424: 0x1043001c  beq         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x10A424u;
    {
        const bool branch_taken_0x10a424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x10A428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A424u;
        // 0x10a428: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a424) {
            ctx->pc = 0x10A498u;
            goto label_10a498;
        }
    }
    ctx->pc = 0x10A42Cu;
    // 0x10a42c: 0x1ce0fff0  bgtz        $a3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x10A42Cu;
    {
        const bool branch_taken_0x10a42c = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x10A430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A42Cu;
        // 0x10a430: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a42c) {
            ctx->pc = 0x10A3F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a3f0;
        }
    }
    ctx->pc = 0x10A434u;
    // 0x10a434: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x10a434u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x10a438: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10a438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10a43c:
    // 0x10a43c: 0x238c3  sra         $a3, $v0, 3
    ctx->pc = 0x10a43cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 3));
    // 0x10a440: 0x10e30011  beq         $a3, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x10A440u;
    {
        const bool branch_taken_0x10a440 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x10A444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A440u;
        // 0x10a444: 0x28e20002  slti        $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a440) {
            ctx->pc = 0x10A488u;
            goto label_10a488;
        }
    }
    ctx->pc = 0x10A448u;
    // 0x10a448: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x10A448u;
    {
        const bool branch_taken_0x10a448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A448u;
        // 0x10a44c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a448) {
            ctx->pc = 0x10A4A0u;
            goto label_10a4a0;
        }
    }
    ctx->pc = 0x10A450u;
    // 0x10a450: 0x10e20008  beq         $a3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10A450u;
    {
        const bool branch_taken_0x10a450 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x10A454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A450u;
        // 0x10a454: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a450) {
            ctx->pc = 0x10A474u;
            goto label_10a474;
        }
    }
    ctx->pc = 0x10A458u;
    // 0x10a458: 0x14e20011  bne         $a3, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x10A458u;
    {
        const bool branch_taken_0x10a458 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x10a458) {
            ctx->pc = 0x10A4A0u;
            goto label_10a4a0;
        }
    }
    ctx->pc = 0x10A460u;
    // 0x10a460: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x10a460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x10a464: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x10a464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x10a468: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x10A468u;
    {
        const bool branch_taken_0x10a468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10a468) {
            ctx->pc = 0x10A498u;
            goto label_10a498;
        }
    }
    ctx->pc = 0x10A470u;
    // 0x10a470: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x10a470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_10a474:
    // 0x10a474: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x10a474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x10a478: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x10a478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x10a47c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10A47Cu;
    {
        const bool branch_taken_0x10a47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10a47c) {
            ctx->pc = 0x10A498u;
            goto label_10a498;
        }
    }
    ctx->pc = 0x10A484u;
    // 0x10a484: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x10a484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_10a488:
    // 0x10a488: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x10a488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x10a48c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x10a48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x10a490: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10A490u;
    {
        const bool branch_taken_0x10a490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10a490) {
            ctx->pc = 0x10A4A0u;
            goto label_10a4a0;
        }
    }
    ctx->pc = 0x10A498u;
label_10a498:
    // 0x10a498: 0x3e00008  jr          $ra
    ctx->pc = 0x10A498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A498u;
        // 0x10a49c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A4A0u;
label_10a4a0:
    // 0x10a4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x10A4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A4A0u;
        // 0x10a4a4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A4A8u;
}
