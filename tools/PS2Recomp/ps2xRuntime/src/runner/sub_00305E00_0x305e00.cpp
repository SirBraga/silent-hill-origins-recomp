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

// Function: sub_00305E00
// Address: 0x305e00 - 0x305e50
void sub_00305E00_0x305e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305E00_0x305e00");
#endif

    switch (ctx->pc) {
        case 0x305e20u: goto label_305e20;
        default: break;
    }

    ctx->pc = 0x305e00u;

    // 0x305e00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x305e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x305e04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x305e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x305e08: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x305e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x305e0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x305e0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305e10: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x305e10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305e14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x305e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x305e18: 0xc0c0cfa  jal         func_3033E8
    ctx->pc = 0x305E18u;
    SET_GPR_U32(ctx, 31, 0x305E20u);
    ctx->pc = 0x305E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305E18u;
    // 0x305e1c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3033E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3033E8u, 0x305E18u, 0x305E20u)) {
        return;
    }
    ctx->pc = 0x305E20u;
label_305e20:
    // 0x305e20: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x305e20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305e24: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x305e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x305e28: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x305E28u;
    {
        const bool branch_taken_0x305e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305e28) {
            ctx->pc = 0x305E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305E28u;
            // 0x305e2c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305E30u;
            goto label_305e30;
        }
    }
    ctx->pc = 0x305E30u;
label_305e30:
    // 0x305e30: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x305e30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x305e34: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x305e34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x305e38: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x305e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x305e3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x305e3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x305e40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x305e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x305e44: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x305e44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x305e48: 0x3e00008  jr          $ra
    ctx->pc = 0x305E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E48u;
        // 0x305e4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305E50u;
}
