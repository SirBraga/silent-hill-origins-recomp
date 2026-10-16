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

// Function: sub_00225800
// Address: 0x225800 - 0x225840
void sub_00225800_0x225800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225800_0x225800");
#endif

    switch (ctx->pc) {
        case 0x22582cu: goto label_22582c;
        default: break;
    }

    ctx->pc = 0x225800u;

    // 0x225800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x225804: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x225804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225808: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x225808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x22580c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22580cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x225810: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x225810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x225814: 0x24840fd8  addiu       $a0, $a0, 0xFD8
    ctx->pc = 0x225814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4056));
    // 0x225818: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x225818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x22581c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x22581cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225820: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x225820u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225824: 0xc08959e  jal         func_225678
    ctx->pc = 0x225824u;
    SET_GPR_U32(ctx, 31, 0x22582Cu);
    ctx->pc = 0x225828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225824u;
    // 0x225828: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225678u, 0x225824u, 0x22582Cu)) {
        return;
    }
    ctx->pc = 0x22582Cu;
label_22582c:
    // 0x22582c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22582cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225830: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x225830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225834: 0x3e00008  jr          $ra
    ctx->pc = 0x225834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225834u;
        // 0x225838: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22583Cu;
    // 0x22583c: 0x0  nop
    ctx->pc = 0x22583cu;
    // NOP
    ctx->pc = 0x225840u;
}
