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

// Function: sub_00182B70
// Address: 0x182b70 - 0x182b98
void sub_00182B70_0x182b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182B70_0x182b70");
#endif

    ctx->pc = 0x182b70u;

    // 0x182b70: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x182b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x182b74: 0x8c628a08  lw          $v0, -0x75F8($v1)
    ctx->pc = 0x182b74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x338A08u));
    // 0x182b78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x182b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x182b7c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x182B7Cu;
    {
        const bool branch_taken_0x182b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B7Cu;
        // 0x182b80: 0xac628a08  sw          $v0, -0x75F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937096), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b7c) {
            ctx->pc = 0x182B90u;
            goto label_182b90;
        }
    }
    ctx->pc = 0x182B84u;
    // 0x182b84: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x182b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x182b88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x182b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x182b8c: 0xac623b84  sw          $v0, 0x3B84($v1)
    ctx->pc = 0x182b8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6C3B84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6C3B84u, _value); } while (0);
label_182b90:
    // 0x182b90: 0x3e00008  jr          $ra
    ctx->pc = 0x182B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B90u;
        // 0x182b94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182B98u;
}
