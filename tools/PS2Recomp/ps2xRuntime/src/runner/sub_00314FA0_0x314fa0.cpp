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

// Function: sub_00314FA0
// Address: 0x314fa0 - 0x315008
void sub_00314FA0_0x314fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314FA0_0x314fa0");
#endif

    switch (ctx->pc) {
        case 0x314fc8u: goto label_314fc8;
        case 0x314fd8u: goto label_314fd8;
        case 0x314fe4u: goto label_314fe4;
        default: break;
    }

    ctx->pc = 0x314fa0u;

    // 0x314fa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x314fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x314fa4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x314fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x314fa8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x314fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x314fac: 0x3c100068  lui         $s0, 0x68
    ctx->pc = 0x314facu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)104 << 16));
    // 0x314fb0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x314fb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314fb4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x314fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x314fb8: 0x8e046ccc  lw          $a0, 0x6CCC($s0)
    ctx->pc = 0x314fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x686CCCu));
    // 0x314fbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x314fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x314fc0: 0xc0c556c  jal         func_3155B0
    ctx->pc = 0x314FC0u;
    SET_GPR_U32(ctx, 31, 0x314FC8u);
    ctx->pc = 0x314FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314FC0u;
    // 0x314fc4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3155B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3155B0u, 0x314FC0u, 0x314FC8u)) {
        return;
    }
    ctx->pc = 0x314FC8u;
label_314fc8:
    // 0x314fc8: 0x8e046ccc  lw          $a0, 0x6CCC($s0)
    ctx->pc = 0x314fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27852)));
    // 0x314fcc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x314fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314fd0: 0xc0c787c  jal         func_31E1F0
    ctx->pc = 0x314FD0u;
    SET_GPR_U32(ctx, 31, 0x314FD8u);
    ctx->pc = 0x314FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314FD0u;
    // 0x314fd4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E1F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31E1F0u, 0x314FD0u, 0x314FD8u)) {
        return;
    }
    ctx->pc = 0x314FD8u;
label_314fd8:
    // 0x314fd8: 0x8e046ccc  lw          $a0, 0x6CCC($s0)
    ctx->pc = 0x314fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27852)));
    // 0x314fdc: 0xc0c5584  jal         func_315610
    ctx->pc = 0x314FDCu;
    SET_GPR_U32(ctx, 31, 0x314FE4u);
    ctx->pc = 0x314FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314FDCu;
    // 0x314fe0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315610u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315610u, 0x314FDCu, 0x314FE4u)) {
        return;
    }
    ctx->pc = 0x314FE4u;
label_314fe4:
    // 0x314fe4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x314fe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314fe8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x314fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x314fec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x314fecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x314ff0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x314ff0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x314ff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x314FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314FF8u;
        // 0x314ffc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315000u;
    // 0x315000: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x315000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x315004: 0x0  nop
    ctx->pc = 0x315004u;
    // NOP
    ctx->pc = 0x315008u;
}
