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

// Function: sub_002ECC38
// Address: 0x2ecc38 - 0x2ecc70
void sub_002ECC38_0x2ecc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ECC38_0x2ecc38");
#endif

    switch (ctx->pc) {
        case 0x2ecc64u: goto label_2ecc64;
        default: break;
    }

    ctx->pc = 0x2ecc38u;

    // 0x2ecc38: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2ecc38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecc3c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ecc3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ecc40: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x2ecc40u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecc44: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x2ecc44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecc48: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2ecc48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecc4c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2ecc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2ecc50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ecc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ecc54: 0x2444e7a0  addiu       $a0, $v0, -0x1860
    ctx->pc = 0x2ecc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961056));
    // 0x2ecc58: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2ecc58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecc5c: 0xc0b67f4  jal         func_2D9FD0
    ctx->pc = 0x2ECC5Cu;
    SET_GPR_U32(ctx, 31, 0x2ECC64u);
    ctx->pc = 0x2ECC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECC5Cu;
    // 0x2ecc60: 0x140402d  daddu       $t0, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9FD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9FD0u, 0x2ECC5Cu, 0x2ECC64u)) {
        return;
    }
    ctx->pc = 0x2ECC64u;
label_2ecc64:
    // 0x2ecc64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ecc64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ecc68: 0x3e00008  jr          $ra
    ctx->pc = 0x2ECC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECC68u;
        // 0x2ecc6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECC68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ECC70u;
}
