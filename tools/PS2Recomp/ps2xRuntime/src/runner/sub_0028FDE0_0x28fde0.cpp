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

// Function: sub_0028FDE0
// Address: 0x28fde0 - 0x28fe18
void sub_0028FDE0_0x28fde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028FDE0_0x28fde0");
#endif

    ctx->pc = 0x28fde0u;

    // 0x28fde0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x28fde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x28fde4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x28fde4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x28fde8: 0x3e00008  jr          $ra
    ctx->pc = 0x28FDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FDE8u;
        // 0x28fdec: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FDE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FDF0u;
    // 0x28fdf0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x28fdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x28fdf4: 0x0  nop
    ctx->pc = 0x28fdf4u;
    // NOP
    // 0x28fdf8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x28fdf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x28fdfc: 0x0  nop
    ctx->pc = 0x28fdfcu;
    // NOP
    // 0x28fe00: 0x8c620520  lw          $v0, 0x520($v1)
    ctx->pc = 0x28fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1312)));
    // 0x28fe04: 0x0  nop
    ctx->pc = 0x28fe04u;
    // NOP
    // 0x28fe08: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x28fe08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fe0c: 0x0  nop
    ctx->pc = 0x28fe0cu;
    // NOP
    // 0x28fe10: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x28fe10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x28fe14: 0x0  nop
    ctx->pc = 0x28fe14u;
    // NOP
    ctx->pc = 0x28fe18u;
}
