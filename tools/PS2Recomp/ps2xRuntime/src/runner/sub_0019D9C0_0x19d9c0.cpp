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

// Function: sub_0019D9C0
// Address: 0x19d9c0 - 0x19da00
void sub_0019D9C0_0x19d9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D9C0_0x19d9c0");
#endif

    switch (ctx->pc) {
        case 0x19d9e8u: goto label_19d9e8;
        default: break;
    }

    ctx->pc = 0x19d9c0u;

    // 0x19d9c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19d9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19d9c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19d9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d9c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19d9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19d9cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19d9d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19d9d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d9d4: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x19d9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x19d9d8: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19D9D8u;
    {
        const bool branch_taken_0x19d9d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19D9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D9D8u;
        // 0x19d9dc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d9d8) {
            ctx->pc = 0x19D9ECu;
            goto label_19d9ec;
        }
    }
    ctx->pc = 0x19D9E0u;
    // 0x19d9e0: 0xc08ab74  jal         func_22ADD0
    ctx->pc = 0x19D9E0u;
    SET_GPR_U32(ctx, 31, 0x19D9E8u);
    ctx->pc = 0x22ADD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22ADD0u, 0x19D9E0u, 0x19D9E8u)) {
        return;
    }
    ctx->pc = 0x19D9E8u;
label_19d9e8:
    // 0x19d9e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19d9e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19d9ec:
    // 0x19d9ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d9ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d9f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19d9f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x19D9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D9F4u;
        // 0x19d9f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D9F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D9FCu;
    // 0x19d9fc: 0x0  nop
    ctx->pc = 0x19d9fcu;
    // NOP
    ctx->pc = 0x19da00u;
}
