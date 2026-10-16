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

// Function: sub_0013BD00
// Address: 0x13bd00 - 0x13bd28
void sub_0013BD00_0x13bd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013BD00_0x13bd00");
#endif

    switch (ctx->pc) {
        case 0x13bd1cu: goto label_13bd1c;
        default: break;
    }

    ctx->pc = 0x13bd00u;

    // 0x13bd00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13bd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13bd04: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x13bd04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x13bd08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13bd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13bd0c: 0x24a5bcc0  addiu       $a1, $a1, -0x4340
    ctx->pc = 0x13bd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950080));
    // 0x13bd10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13bd10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bd14: 0xc09545a  jal         func_255168
    ctx->pc = 0x13BD14u;
    SET_GPR_U32(ctx, 31, 0x13BD1Cu);
    ctx->pc = 0x13BD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BD14u;
    // 0x13bd18: 0x8c8400c4  lw          $a0, 0xC4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x13BD14u, 0x13BD1Cu)) {
        return;
    }
    ctx->pc = 0x13BD1Cu;
label_13bd1c:
    // 0x13bd1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13bd1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13bd20: 0x3e00008  jr          $ra
    ctx->pc = 0x13BD20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD20u;
        // 0x13bd24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BD20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BD28u;
}
