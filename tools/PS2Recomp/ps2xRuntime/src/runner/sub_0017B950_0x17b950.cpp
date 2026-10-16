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

// Function: sub_0017B950
// Address: 0x17b950 - 0x17b988
void sub_0017B950_0x17b950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B950_0x17b950");
#endif

    ctx->pc = 0x17b950u;

    // 0x17b950: 0x8ca300b8  lw          $v1, 0xB8($a1)
    ctx->pc = 0x17b950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 184)));
    // 0x17b954: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B954u;
    {
        const bool branch_taken_0x17b954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B954u;
        // 0x17b958: 0x8ca200b4  lw          $v0, 0xB4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b954) {
            ctx->pc = 0x17B964u;
            goto label_17b964;
        }
    }
    ctx->pc = 0x17B95Cu;
    // 0x17b95c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17B95Cu;
    {
        const bool branch_taken_0x17b95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B95Cu;
        // 0x17b960: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b95c) {
            ctx->pc = 0x17B968u;
            goto label_17b968;
        }
    }
    ctx->pc = 0x17B964u;
label_17b964:
    // 0x17b964: 0xac6200b4  sw          $v0, 0xB4($v1)
    ctx->pc = 0x17b964u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 180), GPR_U32(ctx, 2));
label_17b968:
    // 0x17b968: 0x8ca300b4  lw          $v1, 0xB4($a1)
    ctx->pc = 0x17b968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 180)));
    // 0x17b96c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B96Cu;
    {
        const bool branch_taken_0x17b96c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B96Cu;
        // 0x17b970: 0x8ca200b8  lw          $v0, 0xB8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b96c) {
            ctx->pc = 0x17B97Cu;
            goto label_17b97c;
        }
    }
    ctx->pc = 0x17B974u;
    // 0x17b974: 0x3e00008  jr          $ra
    ctx->pc = 0x17B974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B974u;
        // 0x17b978: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B97Cu;
label_17b97c:
    // 0x17b97c: 0x3e00008  jr          $ra
    ctx->pc = 0x17B97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B97Cu;
        // 0x17b980: 0xac6200b8  sw          $v0, 0xB8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B984u;
    // 0x17b984: 0x0  nop
    ctx->pc = 0x17b984u;
    // NOP
    ctx->pc = 0x17b988u;
}
