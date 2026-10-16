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

// Function: sub_001E4888
// Address: 0x1e4888 - 0x1e48b8
void sub_001E4888_0x1e4888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4888_0x1e4888");
#endif

    ctx->pc = 0x1e4888u;

    // 0x1e4888: 0x4282a  slt         $a1, $zero, $a0
    ctx->pc = 0x1e4888u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1e488c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e488cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1e4890: 0x5200a  movz        $a0, $zero, $a1
    ctx->pc = 0x1e4890u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
    // 0x1e4894: 0x24037fff  addiu       $v1, $zero, 0x7FFF
    ctx->pc = 0x1e4894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x1e4898: 0x8c45e720  lw          $a1, -0x18E0($v0)
    ctx->pc = 0x1e4898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960928)));
    // 0x1e489c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1e489cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1e48a0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1e48a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e48a4: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E48A4u;
    {
        const bool branch_taken_0x1e48a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E48A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E48A4u;
        // 0x1e48a8: 0x43200b  movn        $a0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e48a4) {
            ctx->pc = 0x1E48B0u;
            goto label_1e48b0;
        }
    }
    ctx->pc = 0x1E48ACu;
    // 0x1e48ac: 0xaca40014  sw          $a0, 0x14($a1)
    ctx->pc = 0x1e48acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 4));
label_1e48b0:
    // 0x1e48b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E48B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E48B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E48B8u;
}
