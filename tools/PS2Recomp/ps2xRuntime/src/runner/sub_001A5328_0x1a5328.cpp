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

// Function: sub_001A5328
// Address: 0x1a5328 - 0x1a5358
void sub_001A5328_0x1a5328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5328_0x1a5328");
#endif

    switch (ctx->pc) {
        case 0x1a533cu: goto label_1a533c;
        case 0x1a5348u: goto label_1a5348;
        default: break;
    }

    ctx->pc = 0x1a5328u;

    // 0x1a5328: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a5328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a532c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a532cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a5330: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a5330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a5334: 0xc0691ec  jal         func_1A47B0
    ctx->pc = 0x1A5334u;
    SET_GPR_U32(ctx, 31, 0x1A533Cu);
    ctx->pc = 0x1A5338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5334u;
    // 0x1a5338: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A47B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A47B0u, 0x1A5334u, 0x1A533Cu)) {
        return;
    }
    ctx->pc = 0x1A533Cu;
label_1a533c:
    // 0x1a533c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a533cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5340: 0xc06924e  jal         func_1A4938
    ctx->pc = 0x1A5340u;
    SET_GPR_U32(ctx, 31, 0x1A5348u);
    ctx->pc = 0x1A5344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5340u;
    // 0x1a5344: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4938u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A4938u, 0x1A5340u, 0x1A5348u)) {
        return;
    }
    ctx->pc = 0x1A5348u;
label_1a5348:
    // 0x1a5348: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a5348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a534c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a534cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5350: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5350u;
        // 0x1a5354: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5358u;
}
