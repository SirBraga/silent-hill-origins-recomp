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

// Function: sub_001AE2A0
// Address: 0x1ae2a0 - 0x1ae310
void sub_001AE2A0_0x1ae2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE2A0_0x1ae2a0");
#endif

    switch (ctx->pc) {
        case 0x1ae2c8u: goto label_1ae2c8;
        case 0x1ae2d8u: goto label_1ae2d8;
        default: break;
    }

    ctx->pc = 0x1ae2a0u;

    // 0x1ae2a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ae2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ae2a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ae2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ae2a8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1ae2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1ae2ac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ae2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1ae2b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ae2b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae2b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ae2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ae2b8: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x1ae2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x1ae2bc: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1AE2BCu;
    {
        const bool branch_taken_0x1ae2bc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1AE2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE2BCu;
        // 0x1ae2c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae2bc) {
            ctx->pc = 0x1AE2F0u;
            goto label_1ae2f0;
        }
    }
    ctx->pc = 0x1AE2C4u;
    // 0x1ae2c4: 0x2650004c  addiu       $s0, $s2, 0x4C
    ctx->pc = 0x1ae2c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
label_1ae2c8:
    // 0x1ae2c8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1ae2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1ae2cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ae2ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ae2d0: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1AE2D0u;
    SET_GPR_U32(ctx, 31, 0x1AE2D8u);
    ctx->pc = 0x1AE2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE2D0u;
    // 0x1ae2d4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1AE2D0u, 0x1AE2D8u)) {
        return;
    }
    ctx->pc = 0x1AE2D8u;
label_1ae2d8:
    // 0x1ae2d8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1ae2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1ae2dc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1ae2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1ae2e0: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x1ae2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x1ae2e4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1ae2e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ae2e8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1AE2E8u;
    {
        const bool branch_taken_0x1ae2e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE2E8u;
        // 0x1ae2ec: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae2e8) {
            ctx->pc = 0x1AE2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae2c8;
        }
    }
    ctx->pc = 0x1AE2F0u;
label_1ae2f0:
    // 0x1ae2f0: 0xae4000bc  sw          $zero, 0xBC($s2)
    ctx->pc = 0x1ae2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 0));
    // 0x1ae2f4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ae2f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ae2f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ae2f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae2fc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1ae2fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae300: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae304: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE304u;
        // 0x1ae308: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE30Cu;
    // 0x1ae30c: 0x0  nop
    ctx->pc = 0x1ae30cu;
    // NOP
    ctx->pc = 0x1ae310u;
}
