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

// Function: sub_00322910
// Address: 0x322910 - 0x322948
void sub_00322910_0x322910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322910_0x322910");
#endif

    switch (ctx->pc) {
        case 0x322918u: goto label_322918;
        default: break;
    }

    ctx->pc = 0x322910u;

    // 0x322910: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x322910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x322914: 0x3463f130  ori         $v1, $v1, 0xF130
    ctx->pc = 0x322914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61744);
label_322918:
    // 0x322918: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x322918u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000f130
    // 0x32291c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x32291cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x322920: 0x0  nop
    ctx->pc = 0x322920u;
    // NOP
    // 0x322924: 0x0  nop
    ctx->pc = 0x322924u;
    // NOP
    // 0x322928: 0x0  nop
    ctx->pc = 0x322928u;
    // NOP
    // 0x32292c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x32292Cu;
    {
        const bool branch_taken_0x32292c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32292c) {
            ctx->pc = 0x322918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322918;
        }
    }
    ctx->pc = 0x322934u;
    // 0x322934: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x322934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x322938: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x322938u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32293c: 0x3463f180  ori         $v1, $v1, 0xF180
    ctx->pc = 0x32293cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61824);
    // 0x322940: 0x3e00008  jr          $ra
    ctx->pc = 0x322940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322940u;
        // 0x322944: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322948u;
}
