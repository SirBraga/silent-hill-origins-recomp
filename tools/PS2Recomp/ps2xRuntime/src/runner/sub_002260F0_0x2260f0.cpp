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

// Function: sub_002260F0
// Address: 0x2260f0 - 0x226140
void sub_002260F0_0x2260f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002260F0_0x2260f0");
#endif

    switch (ctx->pc) {
        case 0x226114u: goto label_226114;
        case 0x226124u: goto label_226124;
        default: break;
    }

    ctx->pc = 0x2260f0u;

    // 0x2260f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2260f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2260f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2260f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2260f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2260f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2260fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2260fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226100: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x226100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x226104: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x226104u;
    {
        const bool branch_taken_0x226104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226104) {
            ctx->pc = 0x226108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226104u;
            // 0x226108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22611Cu;
            goto label_22611c;
        }
    }
    ctx->pc = 0x22610Cu;
    // 0x22610c: 0xc0897bc  jal         func_225EF0
    ctx->pc = 0x22610Cu;
    SET_GPR_U32(ctx, 31, 0x226114u);
    ctx->pc = 0x226110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22610Cu;
    // 0x226110: 0x8c4500a0  lw          $a1, 0xA0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225EF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225EF0u, 0x22610Cu, 0x226114u)) {
        return;
    }
    ctx->pc = 0x226114u;
label_226114:
    // 0x226114: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x226114u;
    {
        const bool branch_taken_0x226114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226114u;
        // 0x226118: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226114) {
            ctx->pc = 0x226128u;
            goto label_226128;
        }
    }
    ctx->pc = 0x22611Cu;
label_22611c:
    // 0x22611c: 0xc0897bc  jal         func_225EF0
    ctx->pc = 0x22611Cu;
    SET_GPR_U32(ctx, 31, 0x226124u);
    ctx->pc = 0x226120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22611Cu;
    // 0x226120: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225EF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225EF0u, 0x22611Cu, 0x226124u)) {
        return;
    }
    ctx->pc = 0x226124u;
label_226124:
    // 0x226124: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x226124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_226128:
    // 0x226128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22612c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22612cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226130: 0x3e00008  jr          $ra
    ctx->pc = 0x226130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226130u;
        // 0x226134: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226138u;
    // 0x226138: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x226138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22613c: 0x0  nop
    ctx->pc = 0x22613cu;
    // NOP
    ctx->pc = 0x226140u;
}
