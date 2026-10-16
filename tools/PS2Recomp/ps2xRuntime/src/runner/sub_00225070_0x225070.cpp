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

// Function: sub_00225070
// Address: 0x225070 - 0x2250a8
void sub_00225070_0x225070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225070_0x225070");
#endif

    switch (ctx->pc) {
        case 0x225070u: goto label_225070;
        case 0x225074u: goto label_225074;
        case 0x225078u: goto label_225078;
        case 0x22507cu: goto label_22507c;
        case 0x225080u: goto label_225080;
        case 0x225084u: goto label_225084;
        case 0x225088u: goto label_225088;
        case 0x22508cu: goto label_22508c;
        case 0x225090u: goto label_225090;
        case 0x225094u: goto label_225094;
        case 0x225098u: goto label_225098;
        case 0x22509cu: goto label_22509c;
        case 0x2250a0u: goto label_2250a0;
        case 0x2250a4u: goto label_2250a4;
        default: break;
    }

    ctx->pc = 0x225070u;

label_225070:
    // 0x225070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_225074:
    // 0x225074: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x225074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_225078:
    // 0x225078: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x225078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_22507c:
    // 0x22507c: 0x8c621064  lw          $v0, 0x1064($v1)
    ctx->pc = 0x22507cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4196)));
label_225080:
    // 0x225080: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_225084:
    // 0x225084: 0x40f809  jalr        $v0
label_225088:
    if (ctx->pc == 0x225088u) {
        ctx->pc = 0x225088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225084u;
        // 0x225088: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22508Cu;
        goto label_22508c;
    }
    ctx->pc = 0x225084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22508Cu);
        ctx->pc = 0x225088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225084u;
        // 0x225088: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225084u, 0x22508Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22508Cu;
label_22508c:
    // 0x22508c: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x22508cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
label_225090:
    // 0x225090: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_225094:
    // 0x225094: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x225094u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_225098:
    // 0x225098: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x225098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22509c:
    // 0x22509c: 0x3e00008  jr          $ra
label_2250a0:
    if (ctx->pc == 0x2250A0u) {
        ctx->pc = 0x2250A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22509Cu;
        // 0x2250a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2250A4u;
        goto label_2250a4;
    }
    ctx->pc = 0x22509Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2250A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22509Cu;
        // 0x2250a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22509Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2250A4u;
label_2250a4:
    // 0x2250a4: 0x0  nop
    ctx->pc = 0x2250a4u;
    // NOP
    ctx->pc = 0x2250a8u;
}
