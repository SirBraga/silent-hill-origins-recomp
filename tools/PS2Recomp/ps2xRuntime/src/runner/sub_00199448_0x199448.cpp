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

// Function: sub_00199448
// Address: 0x199448 - 0x199510
void sub_00199448_0x199448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199448_0x199448");
#endif

    switch (ctx->pc) {
        case 0x199470u: goto label_199470;
        default: break;
    }

    ctx->pc = 0x199448u;

    // 0x199448: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x199448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x19944c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x19944cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x199450: 0x3442ffbf  ori         $v0, $v0, 0xFFBF
    ctx->pc = 0x199450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65471);
    // 0x199454: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x199454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x199458: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x199458u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x19945c: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x19945cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x199460: 0x10c00028  beqz        $a2, . + 4 + (0x28 << 2)
    ctx->pc = 0x199460u;
    {
        const bool branch_taken_0x199460 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x199460) {
            ctx->pc = 0x199504u;
            goto label_199504;
        }
    }
    ctx->pc = 0x199468u;
    // 0x199468: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x199468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19946c: 0x0  nop
    ctx->pc = 0x19946cu;
    // NOP
label_199470:
    // 0x199470: 0x54450022  bnel        $v0, $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x199470u;
    {
        const bool branch_taken_0x199470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x199470) {
            ctx->pc = 0x199474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199470u;
            // 0x199474: 0x8cc60008  lw          $a2, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1994FCu;
            goto label_1994fc;
        }
    }
    ctx->pc = 0x199478u;
    // 0x199478: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x199478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x19947c: 0x24870018  addiu       $a3, $a0, 0x18
    ctx->pc = 0x19947cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x199480: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x199480u;
    {
        const bool branch_taken_0x199480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x199484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199480u;
        // 0x199484: 0x24880020  addiu       $t0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199480) {
            ctx->pc = 0x199490u;
            goto label_199490;
        }
    }
    ctx->pc = 0x199488u;
    // 0x199488: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x199488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x19948c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x19948cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_199490:
    // 0x199490: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x199490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x199494: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x199494u;
    {
        const bool branch_taken_0x199494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x199494) {
            ctx->pc = 0x199498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199494u;
            // 0x199498: 0x8c820020  lw          $v0, 0x20($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1994A8u;
            goto label_1994a8;
        }
    }
    ctx->pc = 0x19949Cu;
    // 0x19949c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x19949cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1994a0: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x1994a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x1994a4: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x1994a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1994a8:
    // 0x1994a8: 0x54460004  bnel        $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1994A8u;
    {
        const bool branch_taken_0x1994a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x1994a8) {
            ctx->pc = 0x1994ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1994A8u;
            // 0x1994ac: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1994BCu;
            goto label_1994bc;
        }
    }
    ctx->pc = 0x1994B0u;
    // 0x1994b0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1994b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1994b4: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x1994b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x1994b8: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1994b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_1994bc:
    // 0x1994bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1994bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1994c0: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x1994c0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x1994c4: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1994c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1994c8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1994C8u;
    {
        const bool branch_taken_0x1994c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1994c8) {
            ctx->pc = 0x1994CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1994C8u;
            // 0x1994cc: 0xac46000c  sw          $a2, 0xC($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1994D0u;
            goto label_1994d0;
        }
    }
    ctx->pc = 0x1994D0u;
label_1994d0:
    // 0x1994d0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1994d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1994d4: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x1994d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x1994d8: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1994d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x1994dc: 0xac860018  sw          $a2, 0x18($a0)
    ctx->pc = 0x1994dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
    // 0x1994e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1994e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1994e4: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1994e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1994e8: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x1994e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1994ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1994ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1994f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1994f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1994f4: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x1994f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x1994f8: 0xace30014  sw          $v1, 0x14($a3)
    ctx->pc = 0x1994f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 3));
label_1994fc:
    // 0x1994fc: 0x54c0ffdc  bnel        $a2, $zero, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1994FCu;
    {
        const bool branch_taken_0x1994fc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1994fc) {
            ctx->pc = 0x199500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1994FCu;
            // 0x199500: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199470;
        }
    }
    ctx->pc = 0x199504u;
label_199504:
    // 0x199504: 0x3e00008  jr          $ra
    ctx->pc = 0x199504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19950Cu;
    // 0x19950c: 0x0  nop
    ctx->pc = 0x19950cu;
    // NOP
    ctx->pc = 0x199510u;
}
