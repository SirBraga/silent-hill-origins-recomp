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

// Function: sub_001ED5C0
// Address: 0x1ed5c0 - 0x1ed628
void sub_001ED5C0_0x1ed5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED5C0_0x1ed5c0");
#endif

    switch (ctx->pc) {
        case 0x1ed5f0u: goto label_1ed5f0;
        case 0x1ed5fcu: goto label_1ed5fc;
        default: break;
    }

    ctx->pc = 0x1ed5c0u;

    // 0x1ed5c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ed5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ed5c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ed5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ed5c8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1ed5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1ed5cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ed5ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed5d0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ed5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1ed5d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ed5d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed5d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ed5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ed5dc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1ed5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1ed5e0: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1ED5E0u;
    {
        const bool branch_taken_0x1ed5e0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1ED5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED5E0u;
        // 0x1ed5e4: 0x8e500008  lw          $s0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed5e0) {
            ctx->pc = 0x1ED60Cu;
            goto label_1ed60c;
        }
    }
    ctx->pc = 0x1ED5E8u;
    // 0x1ed5e8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1ed5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ed5ec: 0x0  nop
    ctx->pc = 0x1ed5ecu;
    // NOP
label_1ed5f0:
    // 0x1ed5f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ed5f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ed5f4: 0xc07aff2  jal         func_1EBFC8
    ctx->pc = 0x1ED5F4u;
    SET_GPR_U32(ctx, 31, 0x1ED5FCu);
    ctx->pc = 0x1ED5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED5F4u;
    // 0x1ed5f8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBFC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EBFC8u, 0x1ED5F4u, 0x1ED5FCu)) {
        return;
    }
    ctx->pc = 0x1ED5FCu;
label_1ed5fc:
    // 0x1ed5fc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1ed5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1ed600: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1ed600u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ed604: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1ED604u;
    {
        const bool branch_taken_0x1ed604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed604) {
            ctx->pc = 0x1ED608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED604u;
            // 0x1ed608: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED5F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed5f0;
        }
    }
    ctx->pc = 0x1ED60Cu;
label_1ed60c:
    // 0x1ed60c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ed60cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ed610: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ed610u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ed614: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1ed614u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed61c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED61Cu;
        // 0x1ed620: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED61Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED624u;
    // 0x1ed624: 0x0  nop
    ctx->pc = 0x1ed624u;
    // NOP
    ctx->pc = 0x1ed628u;
}
