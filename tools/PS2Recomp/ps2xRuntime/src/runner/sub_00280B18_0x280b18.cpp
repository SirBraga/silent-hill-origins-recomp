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

// Function: sub_00280B18
// Address: 0x280b18 - 0x280b80
void sub_00280B18_0x280b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280B18_0x280b18");
#endif

    switch (ctx->pc) {
        case 0x280b48u: goto label_280b48;
        default: break;
    }

    ctx->pc = 0x280b18u;

    // 0x280b18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x280b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x280b1c: 0x8f838820  lw          $v1, -0x77E0($gp)
    ctx->pc = 0x280b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936608)));
    // 0x280b20: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x280b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x280b24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x280b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x280b28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x280b28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280b2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x280b30: 0x2038821  addu        $s1, $s0, $v1
    ctx->pc = 0x280b30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x280b34: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x280b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x280b38: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x280B38u;
    {
        const bool branch_taken_0x280b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B38u;
        // 0x280b3c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b38) {
            ctx->pc = 0x280B60u;
            goto label_280b60;
        }
    }
    ctx->pc = 0x280B40u;
    // 0x280b40: 0xc0a0626  jal         func_281898
    ctx->pc = 0x280B40u;
    SET_GPR_U32(ctx, 31, 0x280B48u);
    ctx->pc = 0x281898u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281898u, 0x280B40u, 0x280B48u)) {
        return;
    }
    ctx->pc = 0x280B48u;
label_280b48:
    // 0x280b48: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x280B48u;
    {
        const bool branch_taken_0x280b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B48u;
        // 0x280b4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b48) {
            ctx->pc = 0x280B58u;
            goto label_280b58;
        }
    }
    ctx->pc = 0x280B50u;
    // 0x280b50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x280B50u;
    {
        const bool branch_taken_0x280b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B50u;
        // 0x280b54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b50) {
            ctx->pc = 0x280B60u;
            goto label_280b60;
        }
    }
    ctx->pc = 0x280B58u;
label_280b58:
    // 0x280b58: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x280b58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x280b5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x280b5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280b60:
    // 0x280b60: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x280b60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280b64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x280b64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280b68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x280b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x280B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B6Cu;
        // 0x280b70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280B74u;
    // 0x280b74: 0x0  nop
    ctx->pc = 0x280b74u;
    // NOP
    // 0x280b78: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x280b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x280b7c: 0x0  nop
    ctx->pc = 0x280b7cu;
    // NOP
    ctx->pc = 0x280b80u;
}
