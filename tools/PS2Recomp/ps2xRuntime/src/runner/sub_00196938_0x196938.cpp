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

// Function: sub_00196938
// Address: 0x196938 - 0x196978
void sub_00196938_0x196938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196938_0x196938");
#endif

    switch (ctx->pc) {
        case 0x19695cu: goto label_19695c;
        case 0x196964u: goto label_196964;
        default: break;
    }

    ctx->pc = 0x196938u;

    // 0x196938: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x196938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19693c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19693cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x196940: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x196944: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x196944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196948: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x196948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19694c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19694Cu;
    {
        const bool branch_taken_0x19694c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19694c) {
            ctx->pc = 0x19695Cu;
            goto label_19695c;
        }
    }
    ctx->pc = 0x196954u;
    // 0x196954: 0xc0808d4  jal         func_202350
    ctx->pc = 0x196954u;
    SET_GPR_U32(ctx, 31, 0x19695Cu);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x196954u, 0x19695Cu)) {
        return;
    }
    ctx->pc = 0x19695Cu;
label_19695c:
    // 0x19695c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x19695Cu;
    SET_GPR_U32(ctx, 31, 0x196964u);
    ctx->pc = 0x196960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19695Cu;
    // 0x196960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x19695Cu, 0x196964u)) {
        return;
    }
    ctx->pc = 0x196964u;
label_196964:
    // 0x196964: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x196964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19696c: 0x3e00008  jr          $ra
    ctx->pc = 0x19696Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19696Cu;
        // 0x196970: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19696Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196974u;
    // 0x196974: 0x0  nop
    ctx->pc = 0x196974u;
    // NOP
    ctx->pc = 0x196978u;
}
