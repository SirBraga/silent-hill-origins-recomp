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

// Function: sub_001377B8
// Address: 0x1377b8 - 0x137818
void sub_001377B8_0x1377b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001377B8_0x1377b8");
#endif

    ctx->pc = 0x1377b8u;

    // 0x1377b8: 0x8c821a34  lw          $v0, 0x1A34($a0)
    ctx->pc = 0x1377b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6708)));
    // 0x1377bc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1377BCu;
    {
        const bool branch_taken_0x1377bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1377bc) {
            ctx->pc = 0x1377F0u;
            goto label_1377f0;
        }
    }
    ctx->pc = 0x1377C4u;
    // 0x1377c4: 0x8c821a58  lw          $v0, 0x1A58($a0)
    ctx->pc = 0x1377c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6744)));
    // 0x1377c8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1377C8u;
    {
        const bool branch_taken_0x1377c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1377c8) {
            ctx->pc = 0x1377F0u;
            goto label_1377f0;
        }
    }
    ctx->pc = 0x1377D0u;
    // 0x1377d0: 0x8c821b80  lw          $v0, 0x1B80($a0)
    ctx->pc = 0x1377d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7040)));
    // 0x1377d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1377D4u;
    {
        const bool branch_taken_0x1377d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1377d4) {
            ctx->pc = 0x1377F0u;
            goto label_1377f0;
        }
    }
    ctx->pc = 0x1377DCu;
    // 0x1377dc: 0x8c820b5c  lw          $v0, 0xB5C($a0)
    ctx->pc = 0x1377dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2908)));
    // 0x1377e0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1377e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1377e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1377e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1377e8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1377E8u;
    {
        const bool branch_taken_0x1377e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1377e8) {
            ctx->pc = 0x1377ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1377E8u;
            // 0x1377ec: 0x8c8218d8  lw          $v0, 0x18D8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6360)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1377F8u;
            goto label_1377f8;
        }
    }
    ctx->pc = 0x1377F0u;
label_1377f0:
    // 0x1377f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1377F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1377F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1377F0u;
        // 0x1377f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1377F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1377F8u;
label_1377f8:
    // 0x1377f8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1377F8u;
    {
        const bool branch_taken_0x1377f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1377f8) {
            ctx->pc = 0x13780Cu;
            goto label_13780c;
        }
    }
    ctx->pc = 0x137800u;
    // 0x137800: 0x8c82153c  lw          $v0, 0x153C($a0)
    ctx->pc = 0x137800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5436)));
    // 0x137804: 0x3e00008  jr          $ra
    ctx->pc = 0x137804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137804u;
        // 0x137808: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13780Cu;
label_13780c:
    // 0x13780c: 0x3e00008  jr          $ra
    ctx->pc = 0x13780Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13780Cu;
        // 0x137810: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13780Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137814u;
    // 0x137814: 0x0  nop
    ctx->pc = 0x137814u;
    // NOP
    ctx->pc = 0x137818u;
}
