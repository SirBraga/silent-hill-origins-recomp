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

// Function: sub_00275CC0
// Address: 0x275cc0 - 0x275cf8
void sub_00275CC0_0x275cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275CC0_0x275cc0");
#endif

    switch (ctx->pc) {
        case 0x275ce4u: goto label_275ce4;
        default: break;
    }

    ctx->pc = 0x275cc0u;

    // 0x275cc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x275cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x275cc4: 0x3c060027  lui         $a2, 0x27
    ctx->pc = 0x275cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)39 << 16));
    // 0x275cc8: 0x3c070027  lui         $a3, 0x27
    ctx->pc = 0x275cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)39 << 16));
    // 0x275ccc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x275cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x275cd0: 0x24c66668  addiu       $a2, $a2, 0x6668
    ctx->pc = 0x275cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26216));
    // 0x275cd4: 0x24e766c0  addiu       $a3, $a3, 0x66C0
    ctx->pc = 0x275cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26304));
    // 0x275cd8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x275cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275cdc: 0xc0895e6  jal         func_225798
    ctx->pc = 0x275CDCu;
    SET_GPR_U32(ctx, 31, 0x275CE4u);
    ctx->pc = 0x275CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275CDCu;
    // 0x275ce0: 0x240501b7  addiu       $a1, $zero, 0x1B7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225798u, 0x275CDCu, 0x275CE4u)) {
        return;
    }
    ctx->pc = 0x275CE4u;
label_275ce4:
    // 0x275ce4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275ce8: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x275ce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x275cec: 0x3e00008  jr          $ra
    ctx->pc = 0x275CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275CECu;
        // 0x275cf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275CF4u;
    // 0x275cf4: 0x0  nop
    ctx->pc = 0x275cf4u;
    // NOP
    ctx->pc = 0x275cf8u;
}
