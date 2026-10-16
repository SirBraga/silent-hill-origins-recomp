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

// Function: sub_002F7DE8
// Address: 0x2f7de8 - 0x2f7e20
void sub_002F7DE8_0x2f7de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7DE8_0x2f7de8");
#endif

    switch (ctx->pc) {
        case 0x2f7e0cu: goto label_2f7e0c;
        default: break;
    }

    ctx->pc = 0x2f7de8u;

    // 0x2f7de8: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x2f7de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2f7dec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f7decu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f7df0: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x2f7df0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2f7df4: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2f7df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2f7df8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f7df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f7dfc: 0x244214c8  addiu       $v0, $v0, 0x14C8
    ctx->pc = 0x2f7dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5320));
    // 0x2f7e00: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f7e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f7e04: 0xc0be154  jal         func_2F8550
    ctx->pc = 0x2F7E04u;
    SET_GPR_U32(ctx, 31, 0x2F7E0Cu);
    ctx->pc = 0x2F7E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7E04u;
    // 0x2f7e08: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8550u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F8550u, 0x2F7E04u, 0x2F7E0Cu)) {
        return;
    }
    ctx->pc = 0x2F7E0Cu;
label_2f7e0c:
    // 0x2f7e0c: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2f7e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x2f7e10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f7e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f7e14: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2f7e14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f7e18: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7E18u;
        // 0x2f7e1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7E20u;
}
