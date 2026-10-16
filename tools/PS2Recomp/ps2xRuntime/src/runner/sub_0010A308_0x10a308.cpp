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

// Function: sub_0010A308
// Address: 0x10a308 - 0x10a3d8
void sub_0010A308_0x10a308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A308_0x10a308");
#endif

    switch (ctx->pc) {
        case 0x10a320u: goto label_10a320;
        default: break;
    }

    ctx->pc = 0x10a308u;

    // 0x10a308: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x10a308u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x10a30c: 0x23943  sra         $a3, $v0, 5
    ctx->pc = 0x10a30cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 5));
    // 0x10a310: 0x18e00016  blez        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x10A310u;
    {
        const bool branch_taken_0x10a310 = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x10A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A310u;
        // 0x10a314: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a310) {
            ctx->pc = 0x10A36Cu;
            goto label_10a36c;
        }
    }
    ctx->pc = 0x10A318u;
    // 0x10a318: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x10a318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x10a31c: 0x0  nop
    ctx->pc = 0x10a31cu;
    // NOP
label_10a320:
    // 0x10a320: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10a320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10a324: 0x10430028  beq         $v0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x10A324u;
    {
        const bool branch_taken_0x10a324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10a324) {
            ctx->pc = 0x10A3C8u;
            goto label_10a3c8;
        }
    }
    ctx->pc = 0x10A32Cu;
    // 0x10a32c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x10a32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x10a330: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10a330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10a334: 0x10430024  beq         $v0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x10A334u;
    {
        const bool branch_taken_0x10a334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10a334) {
            ctx->pc = 0x10A3C8u;
            goto label_10a3c8;
        }
    }
    ctx->pc = 0x10A33Cu;
    // 0x10a33c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x10a33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x10a340: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10a340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10a344: 0x10430020  beq         $v0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x10A344u;
    {
        const bool branch_taken_0x10a344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10a344) {
            ctx->pc = 0x10A3C8u;
            goto label_10a3c8;
        }
    }
    ctx->pc = 0x10A34Cu;
    // 0x10a34c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x10a34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x10a350: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10a350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10a354: 0x1043001c  beq         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x10A354u;
    {
        const bool branch_taken_0x10a354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x10A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A354u;
        // 0x10a358: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a354) {
            ctx->pc = 0x10A3C8u;
            goto label_10a3c8;
        }
    }
    ctx->pc = 0x10A35Cu;
    // 0x10a35c: 0x1ce0fff0  bgtz        $a3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x10A35Cu;
    {
        const bool branch_taken_0x10a35c = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x10A360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A35Cu;
        // 0x10a360: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a35c) {
            ctx->pc = 0x10A320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a320;
        }
    }
    ctx->pc = 0x10A364u;
    // 0x10a364: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x10a364u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x10a368: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10a368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10a36c:
    // 0x10a36c: 0x238c3  sra         $a3, $v0, 3
    ctx->pc = 0x10a36cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 3));
    // 0x10a370: 0x10e30011  beq         $a3, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x10A370u;
    {
        const bool branch_taken_0x10a370 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x10A374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A370u;
        // 0x10a374: 0x28e20002  slti        $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a370) {
            ctx->pc = 0x10A3B8u;
            goto label_10a3b8;
        }
    }
    ctx->pc = 0x10A378u;
    // 0x10a378: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x10A378u;
    {
        const bool branch_taken_0x10a378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A378u;
        // 0x10a37c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a378) {
            ctx->pc = 0x10A3D0u;
            goto label_10a3d0;
        }
    }
    ctx->pc = 0x10A380u;
    // 0x10a380: 0x10e20008  beq         $a3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10A380u;
    {
        const bool branch_taken_0x10a380 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x10A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A380u;
        // 0x10a384: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a380) {
            ctx->pc = 0x10A3A4u;
            goto label_10a3a4;
        }
    }
    ctx->pc = 0x10A388u;
    // 0x10a388: 0x14e20011  bne         $a3, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x10A388u;
    {
        const bool branch_taken_0x10a388 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x10a388) {
            ctx->pc = 0x10A3D0u;
            goto label_10a3d0;
        }
    }
    ctx->pc = 0x10A390u;
    // 0x10a390: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x10a390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x10a394: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10a394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10a398: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x10A398u;
    {
        const bool branch_taken_0x10a398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10a398) {
            ctx->pc = 0x10A3C8u;
            goto label_10a3c8;
        }
    }
    ctx->pc = 0x10A3A0u;
    // 0x10a3a0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x10a3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_10a3a4:
    // 0x10a3a4: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x10a3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x10a3a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10a3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10a3ac: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10A3ACu;
    {
        const bool branch_taken_0x10a3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10a3ac) {
            ctx->pc = 0x10A3C8u;
            goto label_10a3c8;
        }
    }
    ctx->pc = 0x10A3B4u;
    // 0x10a3b4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x10a3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_10a3b8:
    // 0x10a3b8: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x10a3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x10a3bc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10a3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10a3c0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10A3C0u;
    {
        const bool branch_taken_0x10a3c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10a3c0) {
            ctx->pc = 0x10A3D0u;
            goto label_10a3d0;
        }
    }
    ctx->pc = 0x10A3C8u;
label_10a3c8:
    // 0x10a3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x10A3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A3C8u;
        // 0x10a3cc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A3C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A3D0u;
label_10a3d0:
    // 0x10a3d0: 0x3e00008  jr          $ra
    ctx->pc = 0x10A3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A3D0u;
        // 0x10a3d4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A3D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A3D8u;
}
