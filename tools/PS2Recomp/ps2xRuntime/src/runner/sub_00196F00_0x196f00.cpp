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

// Function: sub_00196F00
// Address: 0x196f00 - 0x196f48
void sub_00196F00_0x196f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196F00_0x196f00");
#endif

    switch (ctx->pc) {
        case 0x196f2cu: goto label_196f2c;
        case 0x196f34u: goto label_196f34;
        default: break;
    }

    ctx->pc = 0x196f00u;

    // 0x196f00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x196f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x196f04: 0x3c024d49  lui         $v0, 0x4D49
    ctx->pc = 0x196f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19785 << 16));
    // 0x196f08: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x196f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x196f0c: 0x34424e41  ori         $v0, $v0, 0x4E41
    ctx->pc = 0x196f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20033);
    // 0x196f10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x196f14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x196f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196f18: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x196f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x196f1c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x196F1Cu;
    {
        const bool branch_taken_0x196f1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x196f1c) {
            ctx->pc = 0x196F2Cu;
            goto label_196f2c;
        }
    }
    ctx->pc = 0x196F24u;
    // 0x196f24: 0xc068466  jal         func_1A1198
    ctx->pc = 0x196F24u;
    SET_GPR_U32(ctx, 31, 0x196F2Cu);
    ctx->pc = 0x196F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196F24u;
    // 0x196f28: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1198u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A1198u, 0x196F24u, 0x196F2Cu)) {
        return;
    }
    ctx->pc = 0x196F2Cu;
label_196f2c:
    // 0x196f2c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x196F2Cu;
    SET_GPR_U32(ctx, 31, 0x196F34u);
    ctx->pc = 0x196F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196F2Cu;
    // 0x196f30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x196F2Cu, 0x196F34u)) {
        return;
    }
    ctx->pc = 0x196F34u;
label_196f34:
    // 0x196f34: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x196f34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196f38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x196F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196F3Cu;
        // 0x196f40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196F44u;
    // 0x196f44: 0x0  nop
    ctx->pc = 0x196f44u;
    // NOP
    ctx->pc = 0x196f48u;
}
