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

// Function: sub_00255E78
// Address: 0x255e78 - 0x255ec0
void sub_00255E78_0x255e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255E78_0x255e78");
#endif

    switch (ctx->pc) {
        case 0x255eb0u: goto label_255eb0;
        default: break;
    }

    ctx->pc = 0x255e78u;

    // 0x255e78: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x255e78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255e7c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x255e7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x255e80: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x255e80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255e84: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x255e84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255e88: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x255e88u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255e8c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x255e8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255e90: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x255e90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x255e94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x255e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x255e98: 0x248411e0  addiu       $a0, $a0, 0x11E0
    ctx->pc = 0x255e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4576));
    // 0x255e9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x255e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255ea0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x255ea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255ea4: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x255ea4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255ea8: 0xc09389e  jal         func_24E278
    ctx->pc = 0x255EA8u;
    SET_GPR_U32(ctx, 31, 0x255EB0u);
    ctx->pc = 0x255EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255EA8u;
    // 0x255eac: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E278u, 0x255EA8u, 0x255EB0u)) {
        return;
    }
    ctx->pc = 0x255EB0u;
label_255eb0:
    // 0x255eb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x255eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x255EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255EB4u;
        // 0x255eb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255EBCu;
    // 0x255ebc: 0x0  nop
    ctx->pc = 0x255ebcu;
    // NOP
    ctx->pc = 0x255ec0u;
}
