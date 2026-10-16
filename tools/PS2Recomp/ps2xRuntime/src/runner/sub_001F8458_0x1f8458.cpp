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

// Function: sub_001F8458
// Address: 0x1f8458 - 0x1f8488
void sub_001F8458_0x1f8458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8458_0x1f8458");
#endif

    switch (ctx->pc) {
        case 0x1f846cu: goto label_1f846c;
        default: break;
    }

    ctx->pc = 0x1f8458u;

    // 0x1f8458: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f8458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f845c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f845cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f8460: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f8460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f8464: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x1F8464u;
    SET_GPR_U32(ctx, 31, 0x1F846Cu);
    ctx->pc = 0x1F8468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8464u;
    // 0x1f8468: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x1F8464u, 0x1F846Cu)) {
        return;
    }
    ctx->pc = 0x1F846Cu;
label_1f846c:
    // 0x1f846c: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x1f846cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
    // 0x1f8470: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f8470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f8474: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f8474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8478: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f8478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f847c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F847Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F847Cu;
        // 0x1f8480: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F847Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8484u;
    // 0x1f8484: 0x0  nop
    ctx->pc = 0x1f8484u;
    // NOP
    ctx->pc = 0x1f8488u;
}
