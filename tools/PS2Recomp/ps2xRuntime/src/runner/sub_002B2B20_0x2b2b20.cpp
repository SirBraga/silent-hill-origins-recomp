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

// Function: sub_002B2B20
// Address: 0x2b2b20 - 0x2b2b68
void sub_002B2B20_0x2b2b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2B20_0x2b2b20");
#endif

    switch (ctx->pc) {
        case 0x2b2b48u: goto label_2b2b48;
        default: break;
    }

    ctx->pc = 0x2b2b20u;

    // 0x2b2b20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b2b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b2b24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b2b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b2b28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b2b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b2b2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b2b2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2b30: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x2b2b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2b2b34: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2b2b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2b2b38: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B2B38u;
    {
        const bool branch_taken_0x2b2b38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2B38u;
        // 0x2b2b3c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2b38) {
            ctx->pc = 0x2B2B4Cu;
            goto label_2b2b4c;
        }
    }
    ctx->pc = 0x2B2B40u;
    // 0x2b2b40: 0xc0b4aec  jal         func_2D2BB0
    ctx->pc = 0x2B2B40u;
    SET_GPR_U32(ctx, 31, 0x2B2B48u);
    ctx->pc = 0x2D2BB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D2BB0u, 0x2B2B40u, 0x2B2B48u)) {
        return;
    }
    ctx->pc = 0x2B2B48u;
label_2b2b48:
    // 0x2b2b48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b2b48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b2b4c:
    // 0x2b2b4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b2b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2b50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b2b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2b54: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2B54u;
        // 0x2b2b58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2B5Cu;
    // 0x2b2b5c: 0x0  nop
    ctx->pc = 0x2b2b5cu;
    // NOP
    // 0x2b2b60: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b2b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b2b64: 0x0  nop
    ctx->pc = 0x2b2b64u;
    // NOP
    ctx->pc = 0x2b2b68u;
}
