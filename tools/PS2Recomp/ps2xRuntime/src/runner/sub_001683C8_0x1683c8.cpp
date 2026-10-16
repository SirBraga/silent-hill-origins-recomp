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

// Function: sub_001683C8
// Address: 0x1683c8 - 0x168418
void sub_001683C8_0x1683c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001683C8_0x1683c8");
#endif

    switch (ctx->pc) {
        case 0x1683e4u: goto label_1683e4;
        case 0x168404u: goto label_168404;
        default: break;
    }

    ctx->pc = 0x1683c8u;

    // 0x1683c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1683c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1683cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1683ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1683d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1683d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1683d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1683d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1683d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1683d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1683dc: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x1683DCu;
    SET_GPR_U32(ctx, 31, 0x1683E4u);
    ctx->pc = 0x1683E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1683DCu;
    // 0x1683e0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x1683DCu, 0x1683E4u)) {
        return;
    }
    ctx->pc = 0x1683E4u;
label_1683e4:
    // 0x1683e4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1683e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1683e8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1683e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1683ec: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x1683ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6F8880u));
    // 0x1683f0: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1683F0u;
    {
        const bool branch_taken_0x1683f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1683f0) {
            ctx->pc = 0x1683F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1683F0u;
            // 0x1683f4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168408u;
            goto label_168408;
        }
    }
    ctx->pc = 0x1683F8u;
    // 0x1683f8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1683f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1683fc: 0xc05a114  jal         func_168450
    ctx->pc = 0x1683FCu;
    SET_GPR_U32(ctx, 31, 0x168404u);
    ctx->pc = 0x168400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1683FCu;
    // 0x168400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x168450u, 0x1683FCu, 0x168404u)) {
        return;
    }
    ctx->pc = 0x168404u;
label_168404:
    // 0x168404: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x168404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_168408:
    // 0x168408: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x168408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16840c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16840cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168410: 0x3e00008  jr          $ra
    ctx->pc = 0x168410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168410u;
        // 0x168414: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168418u;
}
