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

// Function: sub_00151360
// Address: 0x151360 - 0x1513f8
void sub_00151360_0x151360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151360_0x151360");
#endif

    ctx->pc = 0x151360u;

    // 0x151360: 0x8c86288c  lw          $a2, 0x288C($a0)
    ctx->pc = 0x151360u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10380)));
    // 0x151364: 0x10c00021  beqz        $a2, . + 4 + (0x21 << 2)
    ctx->pc = 0x151364u;
    {
        const bool branch_taken_0x151364 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x151368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151364u;
        // 0x151368: 0x2487288c  addiu       $a3, $a0, 0x288C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 10380));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151364) {
            ctx->pc = 0x1513ECu;
            goto label_1513ec;
        }
    }
    ctx->pc = 0x15136Cu;
    // 0x15136c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x15136cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x151370: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x151370u;
    {
        const bool branch_taken_0x151370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x151370) {
            ctx->pc = 0x151374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151370u;
            // 0x151374: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151384u;
            goto label_151384;
        }
    }
    ctx->pc = 0x151378u;
    // 0x151378: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x151378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x15137c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x15137cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x151380: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x151380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_151384:
    // 0x151384: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x151384u;
    {
        const bool branch_taken_0x151384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x151384) {
            ctx->pc = 0x151388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151384u;
            // 0x151388: 0x8c82288c  lw          $v0, 0x288C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151398u;
            goto label_151398;
        }
    }
    ctx->pc = 0x15138Cu;
    // 0x15138c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x15138cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x151390: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x151390u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x151394: 0x8c82288c  lw          $v0, 0x288C($a0)
    ctx->pc = 0x151394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10380)));
label_151398:
    // 0x151398: 0x54460004  bnel        $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x151398u;
    {
        const bool branch_taken_0x151398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x151398) {
            ctx->pc = 0x15139Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151398u;
            // 0x15139c: 0x8ce20004  lw          $v0, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1513ACu;
            goto label_1513ac;
        }
    }
    ctx->pc = 0x1513A0u;
    // 0x1513a0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1513a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1513a4: 0xac82288c  sw          $v0, 0x288C($a0)
    ctx->pc = 0x1513a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10380), GPR_U32(ctx, 2));
    // 0x1513a8: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1513a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1513ac:
    // 0x1513ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1513acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1513b0: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x1513b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x1513b4: 0x8c822894  lw          $v0, 0x2894($a0)
    ctx->pc = 0x1513b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10388)));
    // 0x1513b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1513B8u;
    {
        const bool branch_taken_0x1513b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1513BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1513B8u;
        // 0x1513bc: 0x24832894  addiu       $v1, $a0, 0x2894 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 10388));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1513b8) {
            ctx->pc = 0x1513C8u;
            goto label_1513c8;
        }
    }
    ctx->pc = 0x1513C0u;
    // 0x1513c0: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x1513c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x1513c4: 0x8c822894  lw          $v0, 0x2894($a0)
    ctx->pc = 0x1513c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10388)));
label_1513c8:
    // 0x1513c8: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x1513c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x1513cc: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1513ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x1513d0: 0xac862894  sw          $a2, 0x2894($a0)
    ctx->pc = 0x1513d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10388), GPR_U32(ctx, 6));
    // 0x1513d4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1513d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1513d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1513d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1513dc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1513dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1513e0: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x1513e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1513e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1513e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1513e8: 0xace30014  sw          $v1, 0x14($a3)
    ctx->pc = 0x1513e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 3));
label_1513ec:
    // 0x1513ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1513ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1513F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1513ECu;
        // 0x1513f0: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1513ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1513F4u;
    // 0x1513f4: 0x0  nop
    ctx->pc = 0x1513f4u;
    // NOP
    ctx->pc = 0x1513f8u;
}
