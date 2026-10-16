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

// Function: sub_0017B918
// Address: 0x17b918 - 0x17b950
void sub_0017B918_0x17b918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B918_0x17b918");
#endif

    ctx->pc = 0x17b918u;

    // 0x17b918: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x17b918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17b91c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B91Cu;
    {
        const bool branch_taken_0x17b91c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B91Cu;
        // 0x17b920: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b91c) {
            ctx->pc = 0x17B930u;
            goto label_17b930;
        }
    }
    ctx->pc = 0x17B924u;
    // 0x17b924: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x17b924u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x17b928: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17B928u;
    {
        const bool branch_taken_0x17b928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B928u;
        // 0x17b92c: 0xaca000b8  sw          $zero, 0xB8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 184), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b928) {
            ctx->pc = 0x17B940u;
            goto label_17b940;
        }
    }
    ctx->pc = 0x17B930u;
label_17b930:
    // 0x17b930: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x17b930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17b934: 0xac4500b4  sw          $a1, 0xB4($v0)
    ctx->pc = 0x17b934u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 5));
    // 0x17b938: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x17b938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17b93c: 0xaca300b8  sw          $v1, 0xB8($a1)
    ctx->pc = 0x17b93cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 184), GPR_U32(ctx, 3));
label_17b940:
    // 0x17b940: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x17b940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x17b944: 0x3e00008  jr          $ra
    ctx->pc = 0x17B944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B944u;
        // 0x17b948: 0xaca000b4  sw          $zero, 0xB4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B94Cu;
    // 0x17b94c: 0x0  nop
    ctx->pc = 0x17b94cu;
    // NOP
    ctx->pc = 0x17b950u;
}
