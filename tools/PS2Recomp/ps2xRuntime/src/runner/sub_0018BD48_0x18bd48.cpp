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

// Function: sub_0018BD48
// Address: 0x18bd48 - 0x18bd88
void sub_0018BD48_0x18bd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018BD48_0x18bd48");
#endif

    switch (ctx->pc) {
        case 0x18bd7cu: goto label_18bd7c;
        default: break;
    }

    ctx->pc = 0x18bd48u;

    // 0x18bd48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18bd48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18bd4c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x18bd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x18bd50: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x18bd50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x18bd54: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x18bd54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x18bd58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18bd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18bd5c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x18bd5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bd60: 0x24638f58  addiu       $v1, $v1, -0x70A8
    ctx->pc = 0x18bd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938456));
    // 0x18bd64: 0x24c68f78  addiu       $a2, $a2, -0x7088
    ctx->pc = 0x18bd64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938488));
    // 0x18bd68: 0x24e78fc0  addiu       $a3, $a3, -0x7040
    ctx->pc = 0x18bd68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294938560));
    // 0x18bd6c: 0xac43007c  sw          $v1, 0x7C($v0)
    ctx->pc = 0x18bd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 3));
    // 0x18bd70: 0xac460074  sw          $a2, 0x74($v0)
    ctx->pc = 0x18bd70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 6));
    // 0x18bd74: 0xc064506  jal         func_191418
    ctx->pc = 0x18BD74u;
    SET_GPR_U32(ctx, 31, 0x18BD7Cu);
    ctx->pc = 0x18BD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BD74u;
    // 0x18bd78: 0xac470030  sw          $a3, 0x30($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x191418u, 0x18BD74u, 0x18BD7Cu)) {
        return;
    }
    ctx->pc = 0x18BD7Cu;
label_18bd7c:
    // 0x18bd7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18bd7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18bd80: 0x3e00008  jr          $ra
    ctx->pc = 0x18BD80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BD80u;
        // 0x18bd84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BD80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18BD88u;
}
