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

// Function: sub_00289B68
// Address: 0x289b68 - 0x289ba8
void sub_00289B68_0x289b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289B68_0x289b68");
#endif

    switch (ctx->pc) {
        case 0x289b80u: goto label_289b80;
        case 0x289b8cu: goto label_289b8c;
        default: break;
    }

    ctx->pc = 0x289b68u;

    // 0x289b68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x289b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x289b6c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x289b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x289b70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x289b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x289b74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x289b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x289b78: 0xc0a25b2  jal         func_2896C8
    ctx->pc = 0x289B78u;
    SET_GPR_U32(ctx, 31, 0x289B80u);
    ctx->pc = 0x289B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289B78u;
    // 0x289b7c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2896C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2896C8u, 0x289B78u, 0x289B80u)) {
        return;
    }
    ctx->pc = 0x289B80u;
label_289b80:
    // 0x289b80: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x289b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x289b84: 0xc0a232a  jal         func_288CA8
    ctx->pc = 0x289B84u;
    SET_GPR_U32(ctx, 31, 0x289B8Cu);
    ctx->pc = 0x289B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289B84u;
    // 0x289b88: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288CA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288CA8u, 0x289B84u, 0x289B8Cu)) {
        return;
    }
    ctx->pc = 0x289B8Cu;
label_289b8c:
    // 0x289b8c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x289b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x289b90: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x289b90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x289b94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x289b94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x289b98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x289b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x289B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289B9Cu;
        // 0x289ba0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289BA4u;
    // 0x289ba4: 0x0  nop
    ctx->pc = 0x289ba4u;
    // NOP
    ctx->pc = 0x289ba8u;
}
