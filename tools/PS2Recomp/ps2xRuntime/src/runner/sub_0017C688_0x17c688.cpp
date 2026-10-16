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

// Function: sub_0017C688
// Address: 0x17c688 - 0x17c6a8
void sub_0017C688_0x17c688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C688_0x17c688");
#endif

    switch (ctx->pc) {
        case 0x17c69cu: goto label_17c69c;
        default: break;
    }

    ctx->pc = 0x17c688u;

    // 0x17c688: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17c688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17c68c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17c68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c690: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17c690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c694: 0xc05f170  jal         func_17C5C0
    ctx->pc = 0x17C694u;
    SET_GPR_U32(ctx, 31, 0x17C69Cu);
    ctx->pc = 0x17C698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C694u;
    // 0x17c698: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C5C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17C5C0u, 0x17C694u, 0x17C69Cu)) {
        return;
    }
    ctx->pc = 0x17C69Cu;
label_17c69c:
    // 0x17c69c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17c69cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c6a0: 0x3e00008  jr          $ra
    ctx->pc = 0x17C6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C6A0u;
        // 0x17c6a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C6A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C6A8u;
}
