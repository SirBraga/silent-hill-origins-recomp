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

// Function: sub_00200DE8
// Address: 0x200de8 - 0x200e38
void sub_00200DE8_0x200de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200DE8_0x200de8");
#endif

    switch (ctx->pc) {
        case 0x200e14u: goto label_200e14;
        default: break;
    }

    ctx->pc = 0x200de8u;

    // 0x200de8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x200de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x200dec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x200decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x200df0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x200df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x200df4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x200df4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200df8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x200dfc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x200dfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200e00: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x200e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x200e04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x200e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200e08: 0x8e11003c  lw          $s1, 0x3C($s0)
    ctx->pc = 0x200e08u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x200e0c: 0xc09562e  jal         func_2558B8
    ctx->pc = 0x200E0Cu;
    SET_GPR_U32(ctx, 31, 0x200E14u);
    ctx->pc = 0x200E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200E0Cu;
    // 0x200e10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2558B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2558B8u, 0x200E0Cu, 0x200E14u)) {
        return;
    }
    ctx->pc = 0x200E14u;
label_200e14:
    // 0x200e14: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x200e14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x200e18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x200e18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200e1c: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x200e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x200e20: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x200e20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x200e24: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x200e24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200e28: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x200e28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200e2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200e30: 0x3e00008  jr          $ra
    ctx->pc = 0x200E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E30u;
        // 0x200e34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200E38u;
}
