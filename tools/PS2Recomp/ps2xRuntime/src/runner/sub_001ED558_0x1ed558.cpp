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

// Function: sub_001ED558
// Address: 0x1ed558 - 0x1ed5c0
void sub_001ED558_0x1ed558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED558_0x1ed558");
#endif

    switch (ctx->pc) {
        case 0x1ed588u: goto label_1ed588;
        case 0x1ed594u: goto label_1ed594;
        default: break;
    }

    ctx->pc = 0x1ed558u;

    // 0x1ed558: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ed558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ed55c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ed55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ed560: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1ed560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1ed564: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ed564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed568: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ed568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1ed56c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ed56cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed570: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ed570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ed574: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1ed574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1ed578: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1ED578u;
    {
        const bool branch_taken_0x1ed578 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1ED57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED578u;
        // 0x1ed57c: 0x8e500008  lw          $s0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed578) {
            ctx->pc = 0x1ED5A4u;
            goto label_1ed5a4;
        }
    }
    ctx->pc = 0x1ED580u;
    // 0x1ed580: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1ed580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ed584: 0x0  nop
    ctx->pc = 0x1ed584u;
    // NOP
label_1ed588:
    // 0x1ed588: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ed588u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ed58c: 0xc07afdc  jal         func_1EBF70
    ctx->pc = 0x1ED58Cu;
    SET_GPR_U32(ctx, 31, 0x1ED594u);
    ctx->pc = 0x1ED590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED58Cu;
    // 0x1ed590: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBF70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EBF70u, 0x1ED58Cu, 0x1ED594u)) {
        return;
    }
    ctx->pc = 0x1ED594u;
label_1ed594:
    // 0x1ed594: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1ed594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1ed598: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1ed598u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ed59c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1ED59Cu;
    {
        const bool branch_taken_0x1ed59c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed59c) {
            ctx->pc = 0x1ED5A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED59Cu;
            // 0x1ed5a0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed588;
        }
    }
    ctx->pc = 0x1ED5A4u;
label_1ed5a4:
    // 0x1ed5a4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ed5a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ed5a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ed5a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ed5ac: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1ed5acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed5b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED5B4u;
        // 0x1ed5b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED5BCu;
    // 0x1ed5bc: 0x0  nop
    ctx->pc = 0x1ed5bcu;
    // NOP
    ctx->pc = 0x1ed5c0u;
}
