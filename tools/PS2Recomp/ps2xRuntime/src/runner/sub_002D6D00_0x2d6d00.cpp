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

// Function: sub_002D6D00
// Address: 0x2d6d00 - 0x2d6d78
void sub_002D6D00_0x2d6d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6D00_0x2d6d00");
#endif

    switch (ctx->pc) {
        case 0x2d6d40u: goto label_2d6d40;
        default: break;
    }

    ctx->pc = 0x2d6d00u;

    // 0x2d6d00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d6d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d6d04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d6d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6d08: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d6d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d6d0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d6d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d6d10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d6d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6d14: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d6d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6d18: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2d6d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d6d1c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2d6d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2d6d20: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x2d6d20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2d6d24: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2D6D24u;
    {
        const bool branch_taken_0x2d6d24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6D24u;
        // 0x2d6d28: 0x8e060024  lw          $a2, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6d24) {
            ctx->pc = 0x2D6D60u;
            goto label_2d6d60;
        }
    }
    ctx->pc = 0x2D6D2Cu;
    // 0x2d6d2c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2d6d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d6d30: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2d6d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6d34: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2d6d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d6d38: 0xc0ab80c  jal         func_2AE030
    ctx->pc = 0x2D6D38u;
    SET_GPR_U32(ctx, 31, 0x2D6D40u);
    ctx->pc = 0x2D6D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6D38u;
    // 0x2d6d3c: 0x8c460008  lw          $a2, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AE030u, 0x2D6D38u, 0x2D6D40u)) {
        return;
    }
    ctx->pc = 0x2D6D40u;
label_2d6d40:
    // 0x2d6d40: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d6d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6d44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d6d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6d48: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2d6d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d6d4c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2d6d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2d6d50: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x2d6d50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x2d6d54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d6d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d6d58: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x2d6d58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x2d6d5c: 0xaf808b20  sw          $zero, -0x74E0($gp)
    ctx->pc = 0x2d6d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937376), GPR_U32(ctx, 0));
label_2d6d60:
    // 0x2d6d60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d6d60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6d64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d6d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6d68: 0x205100b  movn        $v0, $s0, $a1
    ctx->pc = 0x2d6d68u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16));
    // 0x2d6d6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d6d6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6d70: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6D70u;
        // 0x2d6d74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6D78u;
}
