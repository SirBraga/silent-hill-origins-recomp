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

// Function: sub_0025DF28
// Address: 0x25df28 - 0x25df70
void sub_0025DF28_0x25df28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025DF28_0x25df28");
#endif

    switch (ctx->pc) {
        case 0x25df4cu: goto label_25df4c;
        default: break;
    }

    ctx->pc = 0x25df28u;

    // 0x25df28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25df28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25df2c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25df2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25df30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25df30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25df34: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x25df34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25df38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25df38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25df3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25df3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25df40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25df40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25df44: 0xc09638c  jal         func_258E30
    ctx->pc = 0x25DF44u;
    SET_GPR_U32(ctx, 31, 0x25DF4Cu);
    ctx->pc = 0x25DF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DF44u;
    // 0x25df48: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258E30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x258E30u, 0x25DF44u, 0x25DF4Cu)) {
        return;
    }
    ctx->pc = 0x25DF4Cu;
label_25df4c:
    // 0x25df4c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x25df4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25df50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25df50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25df54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25df54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25df58: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x25df58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x25df5c: 0x223100b  movn        $v0, $s1, $v1
    ctx->pc = 0x25df5cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17));
    // 0x25df60: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25df60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25df64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25df64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25df68: 0x3e00008  jr          $ra
    ctx->pc = 0x25DF68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DF68u;
        // 0x25df6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DF68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25DF70u;
}
