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

// Function: sub_001BE038
// Address: 0x1be038 - 0x1be078
void sub_001BE038_0x1be038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE038_0x1be038");
#endif

    switch (ctx->pc) {
        case 0x1be04cu: goto label_1be04c;
        case 0x1be054u: goto label_1be054;
        case 0x1be05cu: goto label_1be05c;
        case 0x1be064u: goto label_1be064;
        default: break;
    }

    ctx->pc = 0x1be038u;

    // 0x1be038: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1be038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1be03c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1be03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1be040: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be044: 0xc06ed3c  jal         func_1BB4F0
    ctx->pc = 0x1BE044u;
    SET_GPR_U32(ctx, 31, 0x1BE04Cu);
    ctx->pc = 0x1BE048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE044u;
    // 0x1be048: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB4F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BB4F0u, 0x1BE044u, 0x1BE04Cu)) {
        return;
    }
    ctx->pc = 0x1BE04Cu;
label_1be04c:
    // 0x1be04c: 0xc06f894  jal         func_1BE250
    ctx->pc = 0x1BE04Cu;
    SET_GPR_U32(ctx, 31, 0x1BE054u);
    ctx->pc = 0x1BE050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE04Cu;
    // 0x1be050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE250u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BE250u, 0x1BE04Cu, 0x1BE054u)) {
        return;
    }
    ctx->pc = 0x1BE054u;
label_1be054:
    // 0x1be054: 0xc06eeac  jal         func_1BBAB0
    ctx->pc = 0x1BE054u;
    SET_GPR_U32(ctx, 31, 0x1BE05Cu);
    ctx->pc = 0x1BE058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE054u;
    // 0x1be058: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BBAB0u, 0x1BE054u, 0x1BE05Cu)) {
        return;
    }
    ctx->pc = 0x1BE05Cu;
label_1be05c:
    // 0x1be05c: 0xc06ed6c  jal         func_1BB5B0
    ctx->pc = 0x1BE05Cu;
    SET_GPR_U32(ctx, 31, 0x1BE064u);
    ctx->pc = 0x1BE060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE05Cu;
    // 0x1be060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB5B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BB5B0u, 0x1BE05Cu, 0x1BE064u)) {
        return;
    }
    ctx->pc = 0x1BE064u;
label_1be064:
    // 0x1be064: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1be064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be06c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE06Cu;
        // 0x1be070: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE06Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE074u;
    // 0x1be074: 0x0  nop
    ctx->pc = 0x1be074u;
    // NOP
    ctx->pc = 0x1be078u;
}
