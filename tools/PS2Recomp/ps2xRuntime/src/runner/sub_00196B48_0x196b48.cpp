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

// Function: sub_00196B48
// Address: 0x196b48 - 0x196b88
void sub_00196B48_0x196b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196B48_0x196b48");
#endif

    switch (ctx->pc) {
        case 0x196b6cu: goto label_196b6c;
        case 0x196b74u: goto label_196b74;
        default: break;
    }

    ctx->pc = 0x196b48u;

    // 0x196b48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x196b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x196b4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x196b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x196b50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x196b54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x196b54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b58: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x196b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x196b5c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x196B5Cu;
    {
        const bool branch_taken_0x196b5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x196b5c) {
            ctx->pc = 0x196B6Cu;
            goto label_196b6c;
        }
    }
    ctx->pc = 0x196B64u;
    // 0x196b64: 0xc0808d4  jal         func_202350
    ctx->pc = 0x196B64u;
    SET_GPR_U32(ctx, 31, 0x196B6Cu);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x196B64u, 0x196B6Cu)) {
        return;
    }
    ctx->pc = 0x196B6Cu;
label_196b6c:
    // 0x196b6c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x196B6Cu;
    SET_GPR_U32(ctx, 31, 0x196B74u);
    ctx->pc = 0x196B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196B6Cu;
    // 0x196b70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x196B6Cu, 0x196B74u)) {
        return;
    }
    ctx->pc = 0x196B74u;
label_196b74:
    // 0x196b74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x196b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196b78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x196B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196B7Cu;
        // 0x196b80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196B84u;
    // 0x196b84: 0x0  nop
    ctx->pc = 0x196b84u;
    // NOP
    ctx->pc = 0x196b88u;
}
