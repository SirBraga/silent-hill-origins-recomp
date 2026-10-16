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

// Function: sub_001F4E98
// Address: 0x1f4e98 - 0x1f4ee0
void sub_001F4E98_0x1f4e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4E98_0x1f4e98");
#endif

    switch (ctx->pc) {
        case 0x1f4ebcu: goto label_1f4ebc;
        case 0x1f4eccu: goto label_1f4ecc;
        default: break;
    }

    ctx->pc = 0x1f4e98u;

    // 0x1f4e98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f4e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f4e9c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f4e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1f4ea0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f4ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4ea4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f4ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f4ea8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f4ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4eac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f4eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f4eb0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1f4eb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4eb4: 0xc065c40  jal         func_197100
    ctx->pc = 0x1F4EB4u;
    SET_GPR_U32(ctx, 31, 0x1F4EBCu);
    ctx->pc = 0x1F4EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4EB4u;
    // 0x1f4eb8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1F4EB4u, 0x1F4EBCu)) {
        return;
    }
    ctx->pc = 0x1F4EBCu;
label_1f4ebc:
    // 0x1f4ebc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4ec0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f4ec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4ec4: 0xc07d3b8  jal         func_1F4EE0
    ctx->pc = 0x1F4EC4u;
    SET_GPR_U32(ctx, 31, 0x1F4ECCu);
    ctx->pc = 0x1F4EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4EC4u;
    // 0x1f4ec8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4EE0u, 0x1F4EC4u, 0x1F4ECCu)) {
        return;
    }
    ctx->pc = 0x1F4ECCu;
label_1f4ecc:
    // 0x1f4ecc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f4eccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f4ed0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f4ed0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4ed4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4ED8u;
        // 0x1f4edc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4EE0u;
}
