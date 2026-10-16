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

// Function: sub_00137A60
// Address: 0x137a60 - 0x137a98
void sub_00137A60_0x137a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137A60_0x137a60");
#endif

    switch (ctx->pc) {
        case 0x137a80u: goto label_137a80;
        default: break;
    }

    ctx->pc = 0x137a60u;

    // 0x137a60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x137a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x137a64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x137a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x137a68: 0x8c821874  lw          $v0, 0x1874($a0)
    ctx->pc = 0x137a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6260)));
    // 0x137a6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x137A6Cu;
    {
        const bool branch_taken_0x137a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137A6Cu;
        // 0x137a70: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137a6c) {
            ctx->pc = 0x137A84u;
            goto label_137a84;
        }
    }
    ctx->pc = 0x137A74u;
    // 0x137a74: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x137a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x137a78: 0xc044fe4  jal         func_113F90
    ctx->pc = 0x137A78u;
    SET_GPR_U32(ctx, 31, 0x137A80u);
    ctx->pc = 0x137A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137A78u;
    // 0x137a7c: 0x8c44830c  lw          $a0, -0x7CF4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x113F90u, 0x137A78u, 0x137A80u)) {
        return;
    }
    ctx->pc = 0x137A80u;
label_137a80:
    // 0x137a80: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x137a80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_137a84:
    // 0x137a84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137a88: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x137a88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x137A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137A8Cu;
        // 0x137a90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137A94u;
    // 0x137a94: 0x0  nop
    ctx->pc = 0x137a94u;
    // NOP
    ctx->pc = 0x137a98u;
}
