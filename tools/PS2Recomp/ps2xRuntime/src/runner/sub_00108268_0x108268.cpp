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

// Function: sub_00108268
// Address: 0x108268 - 0x108298
void sub_00108268_0x108268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108268_0x108268");
#endif

    switch (ctx->pc) {
        case 0x108284u: goto label_108284;
        default: break;
    }

    ctx->pc = 0x108268u;

    // 0x108268: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x108268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10826c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10826cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x108270: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x108270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x108274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x108278: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x108278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10827c: 0xc041f78  jal         func_107DE0
    ctx->pc = 0x10827Cu;
    SET_GPR_U32(ctx, 31, 0x108284u);
    ctx->pc = 0x108280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10827Cu;
    // 0x108280: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107DE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107DE0u, 0x10827Cu, 0x108284u)) {
        return;
    }
    ctx->pc = 0x108284u;
label_108284:
    // 0x108284: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x108284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10828c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10828cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108290: 0x3e00008  jr          $ra
    ctx->pc = 0x108290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108290u;
        // 0x108294: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108298u;
}
