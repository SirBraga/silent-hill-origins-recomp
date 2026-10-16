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

// Function: sub_002817C8
// Address: 0x2817c8 - 0x281820
void sub_002817C8_0x2817c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002817C8_0x2817c8");
#endif

    ctx->pc = 0x2817c8u;

    // 0x2817c8: 0x8f828818  lw          $v0, -0x77E8($gp)
    ctx->pc = 0x2817c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
    // 0x2817cc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2817ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2817d0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2817d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2817d4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2817d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2817d8: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x2817d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x2817dc: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2817DCu;
    {
        const bool branch_taken_0x2817dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2817dc) {
            ctx->pc = 0x2817E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2817DCu;
            // 0x2817e0: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281804u;
            goto label_281804;
        }
    }
    ctx->pc = 0x2817E4u;
    // 0x2817e4: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x2817e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x2817e8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2817e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2817ec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2817ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2817f0: 0x34630068  ori         $v1, $v1, 0x68
    ctx->pc = 0x2817f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)104);
    // 0x2817f4: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x2817f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2817f8: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x2817f8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4));
    // 0x2817fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2817FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2817FCu;
        // 0x281800: 0xfca30068  sd          $v1, 0x68($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 104), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2817FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281804u;
label_281804:
    // 0x281804: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x281804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x281808: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x281808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x28180c: 0x34630068  ori         $v1, $v1, 0x68
    ctx->pc = 0x28180cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)104);
    // 0x281810: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x281810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x281814: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x281814u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4));
    // 0x281818: 0x3e00008  jr          $ra
    ctx->pc = 0x281818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281818u;
        // 0x28181c: 0xfca30028  sd          $v1, 0x28($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281820u;
}
