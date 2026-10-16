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

// Function: sub_002E9110
// Address: 0x2e9110 - 0x2e9190
void sub_002E9110_0x2e9110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9110_0x2e9110");
#endif

    switch (ctx->pc) {
        case 0x2e9128u: goto label_2e9128;
        case 0x2e9144u: goto label_2e9144;
        case 0x2e9158u: goto label_2e9158;
        case 0x2e9168u: goto label_2e9168;
        case 0x2e9170u: goto label_2e9170;
        case 0x2e9178u: goto label_2e9178;
        default: break;
    }

    ctx->pc = 0x2e9110u;

    // 0x2e9110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e9110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e9114: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e9114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9118: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e9118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e911c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e911cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e9120: 0xc0c8fe4  jal         func_323F90
    ctx->pc = 0x2E9120u;
    SET_GPR_U32(ctx, 31, 0x2E9128u);
    ctx->pc = 0x2E9124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9120u;
    // 0x2e9124: 0xaf808c68  sw          $zero, -0x7398($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937704), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323F90u, 0x2E9120u, 0x2E9128u)) {
        return;
    }
    ctx->pc = 0x2E9128u;
label_2e9128:
    // 0x2e9128: 0xaf809070  sw          $zero, -0x6F90($gp)
    ctx->pc = 0x2e9128u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938736), GPR_U32(ctx, 0));
    // 0x2e912c: 0x8f908d94  lw          $s0, -0x726C($gp)
    ctx->pc = 0x2e912cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938004)));
    // 0x2e9130: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e9130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e9134: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E9134u;
    {
        const bool branch_taken_0x2e9134 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E9138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9134u;
        // 0x2e9138: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9134) {
            ctx->pc = 0x2E9160u;
            goto label_2e9160;
        }
    }
    ctx->pc = 0x2E913Cu;
    // 0x2e913c: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2E913Cu;
    SET_GPR_U32(ctx, 31, 0x2E9144u);
    ctx->pc = 0x2E9140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E913Cu;
    // 0x2e9140: 0x8f849078  lw          $a0, -0x6F88($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938744)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2E913Cu, 0x2E9144u)) {
        return;
    }
    ctx->pc = 0x2E9144u;
label_2e9144:
    // 0x2e9144: 0x8f838d94  lw          $v1, -0x726C($gp)
    ctx->pc = 0x2e9144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938004)));
    // 0x2e9148: 0x54700005  bnel        $v1, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9148u;
    {
        const bool branch_taken_0x2e9148 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x2e9148) {
            ctx->pc = 0x2E914Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9148u;
            // 0x2e914c: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9160u;
            goto label_2e9160;
        }
    }
    ctx->pc = 0x2E9150u;
    // 0x2e9150: 0xc0c84d8  jal         func_321360
    ctx->pc = 0x2E9150u;
    SET_GPR_U32(ctx, 31, 0x2E9158u);
    ctx->pc = 0x2E9154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9150u;
    // 0x2e9154: 0x8f849078  lw          $a0, -0x6F88($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938744)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x2E9150u, 0x2E9158u)) {
        return;
    }
    ctx->pc = 0x2E9158u;
label_2e9158:
    // 0x2e9158: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2e9158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2e915c: 0x0  nop
    ctx->pc = 0x2e915cu;
    // NOP
label_2e9160:
    // 0x2e9160: 0xc0c4812  jal         func_312048
    ctx->pc = 0x2E9160u;
    SET_GPR_U32(ctx, 31, 0x2E9168u);
    ctx->pc = 0x2E9164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9160u;
    // 0x2e9164: 0x24848bc0  addiu       $a0, $a0, -0x7440 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312048u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312048u, 0x2E9160u, 0x2E9168u)) {
        return;
    }
    ctx->pc = 0x2E9168u;
label_2e9168:
    // 0x2e9168: 0xc0c84cc  jal         func_321330
    ctx->pc = 0x2E9168u;
    SET_GPR_U32(ctx, 31, 0x2E9170u);
    ctx->pc = 0x2E916Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9168u;
    // 0x2e916c: 0x8f849078  lw          $a0, -0x6F88($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938744)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321330u, 0x2E9168u, 0x2E9170u)) {
        return;
    }
    ctx->pc = 0x2E9170u;
label_2e9170:
    // 0x2e9170: 0xc0c84cc  jal         func_321330
    ctx->pc = 0x2E9170u;
    SET_GPR_U32(ctx, 31, 0x2E9178u);
    ctx->pc = 0x2E9174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9170u;
    // 0x2e9174: 0x8f84907c  lw          $a0, -0x6F84($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938748)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321330u, 0x2E9170u, 0x2E9178u)) {
        return;
    }
    ctx->pc = 0x2E9178u;
label_2e9178:
    // 0x2e9178: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e9178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e917c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e917cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9180: 0xaf808c58  sw          $zero, -0x73A8($gp)
    ctx->pc = 0x2e9180u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937688), GPR_U32(ctx, 0));
    // 0x2e9184: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9184u;
        // 0x2e9188: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E918Cu;
    // 0x2e918c: 0x0  nop
    ctx->pc = 0x2e918cu;
    // NOP
    ctx->pc = 0x2e9190u;
}
