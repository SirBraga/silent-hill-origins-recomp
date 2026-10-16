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

// Function: sub_001D2D68
// Address: 0x1d2d68 - 0x1d2db8
void sub_001D2D68_0x1d2d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2D68_0x1d2d68");
#endif

    switch (ctx->pc) {
        case 0x1d2d94u: goto label_1d2d94;
        case 0x1d2da0u: goto label_1d2da0;
        default: break;
    }

    ctx->pc = 0x1d2d68u;

    // 0x1d2d68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d2d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d2d6c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d2d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d2d70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d2d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d2d74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d2d74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2d78: 0x3c110034  lui         $s1, 0x34
    ctx->pc = 0x1d2d78u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
    // 0x1d2d7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d2d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d2d80: 0x8e249b64  lw          $a0, -0x649C($s1)
    ctx->pc = 0x1d2d80u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x339B64u));
    // 0x1d2d84: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2D84u;
    {
        const bool branch_taken_0x1d2d84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2d84) {
            ctx->pc = 0x1D2D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2D84u;
            // 0x1d2d88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2D98u;
            goto label_1d2d98;
        }
    }
    ctx->pc = 0x1D2D8Cu;
    // 0x1d2d8c: 0xc0808d4  jal         func_202350
    ctx->pc = 0x1D2D8Cu;
    SET_GPR_U32(ctx, 31, 0x1D2D94u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x1D2D8Cu, 0x1D2D94u)) {
        return;
    }
    ctx->pc = 0x1D2D94u;
label_1d2d94:
    // 0x1d2d94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d2d98:
    // 0x1d2d98: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1D2D98u;
    SET_GPR_U32(ctx, 31, 0x1D2DA0u);
    ctx->pc = 0x1D2D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2D98u;
    // 0x1d2d9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1D2D98u, 0x1D2DA0u)) {
        return;
    }
    ctx->pc = 0x1D2DA0u;
label_1d2da0:
    // 0x1d2da0: 0xae229b64  sw          $v0, -0x649C($s1)
    ctx->pc = 0x1d2da0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294941540), GPR_U32(ctx, 2));
    // 0x1d2da4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d2da4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d2da8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d2da8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2dac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d2dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2db0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2DB0u;
        // 0x1d2db4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2DB8u;
}
