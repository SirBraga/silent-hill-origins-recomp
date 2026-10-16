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

// Function: sub_00192138
// Address: 0x192138 - 0x192168
void sub_00192138_0x192138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192138_0x192138");
#endif

    switch (ctx->pc) {
        case 0x192150u: goto label_192150;
        default: break;
    }

    ctx->pc = 0x192138u;

    // 0x192138: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19213c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x19213cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x192140: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x192140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x192144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x192144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x192148: 0xc097b18  jal         func_25EC60
    ctx->pc = 0x192148u;
    SET_GPR_U32(ctx, 31, 0x192150u);
    ctx->pc = 0x19214Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192148u;
    // 0x19214c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EC60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25EC60u, 0x192148u, 0x192150u)) {
        return;
    }
    ctx->pc = 0x192150u;
label_192150:
    // 0x192150: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x192150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192154: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192158: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x192158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19215c: 0x3e00008  jr          $ra
    ctx->pc = 0x19215Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19215Cu;
        // 0x192160: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19215Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192164u;
    // 0x192164: 0x0  nop
    ctx->pc = 0x192164u;
    // NOP
    ctx->pc = 0x192168u;
}
