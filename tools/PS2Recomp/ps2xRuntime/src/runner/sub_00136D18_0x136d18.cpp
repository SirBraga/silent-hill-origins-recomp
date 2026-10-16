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

// Function: sub_00136D18
// Address: 0x136d18 - 0x136d68
void sub_00136D18_0x136d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136D18_0x136d18");
#endif

    switch (ctx->pc) {
        case 0x136d34u: goto label_136d34;
        default: break;
    }

    ctx->pc = 0x136d18u;

    // 0x136d18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x136d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x136d1c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x136d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x136d20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x136d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x136d24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x136d24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136d28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x136d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x136d2c: 0xc049b66  jal         func_126D98
    ctx->pc = 0x136D2Cu;
    SET_GPR_U32(ctx, 31, 0x136D34u);
    ctx->pc = 0x136D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136D2Cu;
    // 0x136d30: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126D98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126D98u, 0x136D2Cu, 0x136D34u)) {
        return;
    }
    ctx->pc = 0x136D34u;
label_136d34:
    // 0x136d34: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x136D34u;
    {
        const bool branch_taken_0x136d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x136d34) {
            ctx->pc = 0x136D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136D34u;
            // 0x136d38: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136D4Cu;
            goto label_136d4c;
        }
    }
    ctx->pc = 0x136D3Cu;
    // 0x136d3c: 0x8e021b5c  lw          $v0, 0x1B5C($s0)
    ctx->pc = 0x136d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7004)));
    // 0x136d40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x136D40u;
    {
        const bool branch_taken_0x136d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D40u;
        // 0x136d44: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136d40) {
            ctx->pc = 0x136D50u;
            goto label_136d50;
        }
    }
    ctx->pc = 0x136D48u;
    // 0x136d48: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x136d48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_136d4c:
    // 0x136d4c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x136d4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_136d50:
    // 0x136d50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x136d50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136d54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x136d54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136d58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x136d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x136D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D5Cu;
        // 0x136d60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136D64u;
    // 0x136d64: 0x0  nop
    ctx->pc = 0x136d64u;
    // NOP
    ctx->pc = 0x136d68u;
}
