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

// Function: sub_001AE268
// Address: 0x1ae268 - 0x1ae2a0
void sub_001AE268_0x1ae268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE268_0x1ae268");
#endif

    switch (ctx->pc) {
        case 0x1ae284u: goto label_1ae284;
        default: break;
    }

    ctx->pc = 0x1ae268u;

    // 0x1ae268: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ae268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ae26c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ae26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ae270: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ae270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ae274: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ae274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae278: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1ae278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1ae27c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1AE27Cu;
    SET_GPR_U32(ctx, 31, 0x1AE284u);
    ctx->pc = 0x1AE280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE27Cu;
    // 0x1ae280: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1AE27Cu, 0x1AE284u)) {
        return;
    }
    ctx->pc = 0x1AE284u;
label_1ae284:
    // 0x1ae284: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1ae284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1ae288: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1ae288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1ae28c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ae28cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae290: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae294: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE294u;
        // 0x1ae298: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE29Cu;
    // 0x1ae29c: 0x0  nop
    ctx->pc = 0x1ae29cu;
    // NOP
    ctx->pc = 0x1ae2a0u;
}
