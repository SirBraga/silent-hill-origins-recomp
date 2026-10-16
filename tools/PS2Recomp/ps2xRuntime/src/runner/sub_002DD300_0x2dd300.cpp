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

// Function: sub_002DD300
// Address: 0x2dd300 - 0x2dd358
void sub_002DD300_0x2dd300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD300_0x2dd300");
#endif

    switch (ctx->pc) {
        case 0x2dd328u: goto label_2dd328;
        case 0x2dd330u: goto label_2dd330;
        default: break;
    }

    ctx->pc = 0x2dd300u;

    // 0x2dd300: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2dd300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2dd304: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2dd304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2dd308: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2dd308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2dd30c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2dd30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2dd310: 0x27919020  addiu       $s1, $gp, -0x6FE0
    ctx->pc = 0x2dd310u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938656));
    // 0x2dd314: 0x8f909020  lw          $s0, -0x6FE0($gp)
    ctx->pc = 0x2dd314u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
    // 0x2dd318: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2dd318u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd31c: 0x12110007  beq         $s0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DD31Cu;
    {
        const bool branch_taken_0x2dd31c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x2DD320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD31Cu;
        // 0x2dd320: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd31c) {
            ctx->pc = 0x2DD33Cu;
            goto label_2dd33c;
        }
    }
    ctx->pc = 0x2DD324u;
    // 0x2dd324: 0x2604fff0  addiu       $a0, $s0, -0x10
    ctx->pc = 0x2dd324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
label_2dd328:
    // 0x2dd328: 0xc0b8342  jal         func_2E0D08
    ctx->pc = 0x2DD328u;
    SET_GPR_U32(ctx, 31, 0x2DD330u);
    ctx->pc = 0x2DD32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD328u;
    // 0x2dd32c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0D08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0D08u, 0x2DD328u, 0x2DD330u)) {
        return;
    }
    ctx->pc = 0x2DD330u;
label_2dd330:
    // 0x2dd330: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x2dd330u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2dd334: 0x1611fffc  bne         $s0, $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2DD334u;
    {
        const bool branch_taken_0x2dd334 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x2DD338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD334u;
        // 0x2dd338: 0x2604fff0  addiu       $a0, $s0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd334) {
            ctx->pc = 0x2DD328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dd328;
        }
    }
    ctx->pc = 0x2DD33Cu;
label_2dd33c:
    // 0x2dd33c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2dd33cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dd340: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2dd340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dd344: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2dd344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd348: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dd348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd34c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD34Cu;
        // 0x2dd350: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD34Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD354u;
    // 0x2dd354: 0x0  nop
    ctx->pc = 0x2dd354u;
    // NOP
    ctx->pc = 0x2dd358u;
}
