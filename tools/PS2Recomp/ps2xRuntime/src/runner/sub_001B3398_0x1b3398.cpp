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

// Function: sub_001B3398
// Address: 0x1b3398 - 0x1b33f8
void sub_001B3398_0x1b3398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3398_0x1b3398");
#endif

    switch (ctx->pc) {
        case 0x1b33c0u: goto label_1b33c0;
        case 0x1b33d0u: goto label_1b33d0;
        default: break;
    }

    ctx->pc = 0x1b3398u;

    // 0x1b3398: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b3398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b339c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1b339cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1b33a0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b33a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b33a4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1b33a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1b33a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b33a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b33ac: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x1b33acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b33b0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1b33b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1b33b4: 0x247191f8  addiu       $s1, $v1, -0x6E08
    ctx->pc = 0x1b33b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939128));
    // 0x1b33b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b33b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b33bc: 0x24528630  addiu       $s2, $v0, -0x79D0
    ctx->pc = 0x1b33bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936112));
label_1b33c0:
    // 0x1b33c0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1b33c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b33c4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1b33c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1b33c8: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x1B33C8u;
    SET_GPR_U32(ctx, 31, 0x1B33D0u);
    ctx->pc = 0x1B33CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B33C8u;
    // 0x1b33cc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1B33C8u, 0x1B33D0u)) {
        return;
    }
    ctx->pc = 0x1B33D0u;
label_1b33d0:
    // 0x1b33d0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1b33d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1b33d4: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B33D4u;
    {
        const bool branch_taken_0x1b33d4 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x1B33D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B33D4u;
        // 0x1b33d8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b33d4) {
            ctx->pc = 0x1B33C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b33c0;
        }
    }
    ctx->pc = 0x1B33DCu;
    // 0x1b33dc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b33dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b33e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b33e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b33e4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1b33e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b33e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b33e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b33ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1B33ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B33F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B33ECu;
        // 0x1b33f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B33ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B33F4u;
    // 0x1b33f4: 0x0  nop
    ctx->pc = 0x1b33f4u;
    // NOP
    ctx->pc = 0x1b33f8u;
}
