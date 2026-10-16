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

// Function: sub_00205D68
// Address: 0x205d68 - 0x205d98
void sub_00205D68_0x205d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205D68_0x205d68");
#endif

    ctx->pc = 0x205d68u;

    // 0x205d68: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x205d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x205d6c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x205d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x205d70: 0x24422d28  addiu       $v0, $v0, 0x2D28
    ctx->pc = 0x205d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11560));
    // 0x205d74: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x205d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x205d78: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x205d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x205d7c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x205D7Cu;
    {
        const bool branch_taken_0x205d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x205d7c) {
            ctx->pc = 0x205D8Cu;
            goto label_205d8c;
        }
    }
    ctx->pc = 0x205D84u;
    // 0x205d84: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x205d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x205d88: 0x24423ea0  addiu       $v0, $v0, 0x3EA0
    ctx->pc = 0x205d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16032));
label_205d8c:
    // 0x205d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x205D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205D94u;
    // 0x205d94: 0x0  nop
    ctx->pc = 0x205d94u;
    // NOP
    ctx->pc = 0x205d98u;
}
