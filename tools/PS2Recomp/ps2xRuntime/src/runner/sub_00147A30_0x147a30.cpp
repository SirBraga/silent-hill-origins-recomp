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

// Function: sub_00147A30
// Address: 0x147a30 - 0x147a68
void sub_00147A30_0x147a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147A30_0x147a30");
#endif

    switch (ctx->pc) {
        case 0x147a44u: goto label_147a44;
        case 0x147a58u: goto label_147a58;
        default: break;
    }

    ctx->pc = 0x147a30u;

    // 0x147a30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x147a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x147a34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x147a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x147a38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x147a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x147a3c: 0xc04ee4a  jal         func_13B928
    ctx->pc = 0x147A3Cu;
    SET_GPR_U32(ctx, 31, 0x147A44u);
    ctx->pc = 0x147A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147A3Cu;
    // 0x147a40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B928u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13B928u, 0x147A3Cu, 0x147A44u)) {
        return;
    }
    ctx->pc = 0x147A44u;
label_147a44:
    // 0x147a44: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x147a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x147a48: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x147A48u;
    {
        const bool branch_taken_0x147a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147a48) {
            ctx->pc = 0x147A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147A48u;
            // 0x147a4c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147A5Cu;
            goto label_147a5c;
        }
    }
    ctx->pc = 0x147A50u;
    // 0x147a50: 0xc041f10  jal         func_107C40
    ctx->pc = 0x147A50u;
    SET_GPR_U32(ctx, 31, 0x147A58u);
    ctx->pc = 0x147A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147A50u;
    // 0x147a54: 0x2604004c  addiu       $a0, $s0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107C40u, 0x147A50u, 0x147A58u)) {
        return;
    }
    ctx->pc = 0x147A58u;
label_147a58:
    // 0x147a58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x147a58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_147a5c:
    // 0x147a5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x147a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147a60: 0x3e00008  jr          $ra
    ctx->pc = 0x147A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147A60u;
        // 0x147a64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147A68u;
}
