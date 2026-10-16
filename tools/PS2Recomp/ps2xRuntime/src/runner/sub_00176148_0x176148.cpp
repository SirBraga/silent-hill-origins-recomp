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

// Function: sub_00176148
// Address: 0x176148 - 0x1761a8
void sub_00176148_0x176148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176148_0x176148");
#endif

    switch (ctx->pc) {
        case 0x176164u: goto label_176164;
        case 0x176190u: goto label_176190;
        default: break;
    }

    ctx->pc = 0x176148u;

    // 0x176148: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x176148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17614c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17614cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x176150: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x176150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x176154: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x176154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176158: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x176158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17615c: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x17615Cu;
    SET_GPR_U32(ctx, 31, 0x176164u);
    ctx->pc = 0x176160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17615Cu;
    // 0x176160: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x17615Cu, 0x176164u)) {
        return;
    }
    ctx->pc = 0x176164u;
label_176164:
    // 0x176164: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x176164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x176168: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x176168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x17616c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17616Cu;
    {
        const bool branch_taken_0x17616c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x176170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17616Cu;
        // 0x176170: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17616c) {
            ctx->pc = 0x176194u;
            goto label_176194;
        }
    }
    ctx->pc = 0x176174u;
    // 0x176174: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x176174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x176178: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x176178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17617c: 0x8c449168  lw          $a0, -0x6E98($v0)
    ctx->pc = 0x17617cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x339168u));
    // 0x176180: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x176180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x176184: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x176184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x176188: 0xc06c24c  jal         func_1B0930
    ctx->pc = 0x176188u;
    SET_GPR_U32(ctx, 31, 0x176190u);
    ctx->pc = 0x17618Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176188u;
    // 0x17618c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B0930u, 0x176188u, 0x176190u)) {
        return;
    }
    ctx->pc = 0x176190u;
label_176190:
    // 0x176190: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x176190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_176194:
    // 0x176194: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x176194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176198: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x176198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17619c: 0x3e00008  jr          $ra
    ctx->pc = 0x17619Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1761A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17619Cu;
        // 0x1761a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17619Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1761A4u;
    // 0x1761a4: 0x0  nop
    ctx->pc = 0x1761a4u;
    // NOP
    ctx->pc = 0x1761a8u;
}
