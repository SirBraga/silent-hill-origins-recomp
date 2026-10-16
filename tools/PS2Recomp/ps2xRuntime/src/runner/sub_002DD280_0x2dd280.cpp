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

// Function: sub_002DD280
// Address: 0x2dd280 - 0x2dd2f0
void sub_002DD280_0x2dd280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD280_0x2dd280");
#endif

    switch (ctx->pc) {
        case 0x2dd2a8u: goto label_2dd2a8;
        case 0x2dd2c8u: goto label_2dd2c8;
        default: break;
    }

    ctx->pc = 0x2dd280u;

    // 0x2dd280: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2dd280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2dd284: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2dd284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2dd288: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dd288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd28c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2dd28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2dd290: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2dd290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2dd294: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x2dd294u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2dd298: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2dd298u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd29c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dd29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dd2a0: 0xc0b8362  jal         func_2E0D88
    ctx->pc = 0x2DD2A0u;
    SET_GPR_U32(ctx, 31, 0x2DD2A8u);
    ctx->pc = 0x2DD2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD2A0u;
    // 0x2dd2a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0D88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0D88u, 0x2DD2A0u, 0x2DD2A8u)) {
        return;
    }
    ctx->pc = 0x2DD2A8u;
label_2dd2a8:
    // 0x2dd2a8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2dd2a8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2dd2ac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2dd2acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd2b0: 0x202180b  movn        $v1, $s0, $v0
    ctx->pc = 0x2dd2b0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16));
    // 0x2dd2b4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DD2B4u;
    {
        const bool branch_taken_0x2dd2b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD2B4u;
        // 0x2dd2b8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd2b4) {
            ctx->pc = 0x2DD2D0u;
            goto label_2dd2d0;
        }
    }
    ctx->pc = 0x2DD2BCu;
    // 0x2dd2bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dd2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd2c0: 0xc0b8328  jal         func_2E0CA0
    ctx->pc = 0x2DD2C0u;
    SET_GPR_U32(ctx, 31, 0x2DD2C8u);
    ctx->pc = 0x2DD2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD2C0u;
    // 0x2dd2c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0CA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0CA0u, 0x2DD2C0u, 0x2DD2C8u)) {
        return;
    }
    ctx->pc = 0x2DD2C8u;
label_2dd2c8:
    // 0x2dd2c8: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x2dd2c8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
    // 0x2dd2cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2dd2ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dd2d0:
    // 0x2dd2d0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2dd2d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dd2d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2dd2d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dd2d8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2dd2d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd2dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dd2dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd2e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD2E0u;
        // 0x2dd2e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD2E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD2E8u;
    // 0x2dd2e8: 0xaf84c014  sw          $a0, -0x3FEC($gp)
    ctx->pc = 0x2dd2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950932), GPR_U32(ctx, 4));
    // 0x2dd2ec: 0x0  nop
    ctx->pc = 0x2dd2ecu;
    // NOP
    ctx->pc = 0x2dd2f0u;
}
