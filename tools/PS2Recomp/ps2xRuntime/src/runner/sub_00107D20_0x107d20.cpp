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

// Function: sub_00107D20
// Address: 0x107d20 - 0x107d78
void sub_00107D20_0x107d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107D20_0x107d20");
#endif

    switch (ctx->pc) {
        case 0x107d6cu: goto label_107d6c;
        default: break;
    }

    ctx->pc = 0x107d20u;

    // 0x107d20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x107d24: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x107d24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x107d28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x107d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x107d2c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x107d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x107d30: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x107d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x107d34: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x107d34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x107d38: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x107D38u;
    {
        const bool branch_taken_0x107d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107d38) {
            ctx->pc = 0x107D64u;
            goto label_107d64;
        }
    }
    ctx->pc = 0x107D40u;
    // 0x107d40: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x107d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x107d44: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x107D44u;
    {
        const bool branch_taken_0x107d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107d44) {
            ctx->pc = 0x107D64u;
            goto label_107d64;
        }
    }
    ctx->pc = 0x107D4Cu;
    // 0x107d4c: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x107d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x107d50: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x107D50u;
    {
        const bool branch_taken_0x107d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107d50) {
            ctx->pc = 0x107D64u;
            goto label_107d64;
        }
    }
    ctx->pc = 0x107D58u;
    // 0x107d58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x107d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x107d5c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x107D5Cu;
    {
        const bool branch_taken_0x107d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x107d5c) {
            ctx->pc = 0x107D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107D5Cu;
            // 0x107d60: 0xc44c000c  lwc1        $f12, 0xC($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x107D64u;
            goto label_107d64;
        }
    }
    ctx->pc = 0x107D64u;
label_107d64:
    // 0x107d64: 0xc041d28  jal         func_1074A0
    ctx->pc = 0x107D64u;
    SET_GPR_U32(ctx, 31, 0x107D6Cu);
    ctx->pc = 0x1074A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1074A0u, 0x107D64u, 0x107D6Cu)) {
        return;
    }
    ctx->pc = 0x107D6Cu;
label_107d6c:
    // 0x107d6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107d70: 0x3e00008  jr          $ra
    ctx->pc = 0x107D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D70u;
        // 0x107d74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107D78u;
}
