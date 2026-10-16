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

// Function: sub_0017B988
// Address: 0x17b988 - 0x17b9d8
void sub_0017B988_0x17b988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B988_0x17b988");
#endif

    switch (ctx->pc) {
        case 0x17b9a8u: goto label_17b9a8;
        case 0x17b9c0u: goto label_17b9c0;
        default: break;
    }

    ctx->pc = 0x17b988u;

    // 0x17b988: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17b988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17b98c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17b98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17b990: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17b990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b994: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17b994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17b998: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x17b998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b99c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17b99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b9a0: 0xc0801d2  jal         func_200748
    ctx->pc = 0x17B9A0u;
    SET_GPR_U32(ctx, 31, 0x17B9A8u);
    ctx->pc = 0x17B9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B9A0u;
    // 0x17b9a4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200748u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200748u, 0x17B9A0u, 0x17B9A8u)) {
        return;
    }
    ctx->pc = 0x17B9A8u;
label_17b9a8:
    // 0x17b9a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17b9a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b9ac: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B9ACu;
    {
        const bool branch_taken_0x17b9ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B9ACu;
        // 0x17b9b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b9ac) {
            ctx->pc = 0x17B9C0u;
            goto label_17b9c0;
        }
    }
    ctx->pc = 0x17B9B4u;
    // 0x17b9b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17b9b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b9b8: 0xc05ee76  jal         func_17B9D8
    ctx->pc = 0x17B9B8u;
    SET_GPR_U32(ctx, 31, 0x17B9C0u);
    ctx->pc = 0x17B9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B9B8u;
    // 0x17b9bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B9D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17B9D8u, 0x17B9B8u, 0x17B9C0u)) {
        return;
    }
    ctx->pc = 0x17B9C0u;
label_17b9c0:
    // 0x17b9c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17b9c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b9c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17b9c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b9c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17b9c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b9cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b9d0: 0x3e00008  jr          $ra
    ctx->pc = 0x17B9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B9D0u;
        // 0x17b9d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B9D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B9D8u;
}
